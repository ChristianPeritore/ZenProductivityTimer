#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <iomanip>
#include <atomic>
#include <conio.h> // Only for Windows (to detect key presses)

using namespace std;

// Function to format and display the time
void displayTime(int secondsLeft) {
    int hours = secondsLeft / 3600;
    int minutes = (secondsLeft % 3600) / 60;
    int seconds = secondsLeft % 60;

    cout << "\rFocus Session: "; // \r returns the cursor to the start of the line
    if (hours > 0) cout << hours << "h ";
    cout << minutes << "m " << setfill('0') << setw(2) << seconds << "s";
    
    // Status indicator
    if (secondsLeft <= 60 && secondsLeft > 0) {
        cout << " [FINAL MINUTE!]";
    }
    cout << " | Press 'P' to Pause, 'R' to Reset, 'Q' to Quit" << flush;
}

void printHeader() {
    system("cls"); // Clear screen for Windows
    cout << "========================================" << endl;
    cout << "       SCIENTIFIC FOCUS TIMER           " << endl;
    cout << "========================================" << endl;
}

int main() {
    int totalMinutes;
    bool quit = false;

    while (!quit) {
        printHeader();
        cout << "Enter minutes (1 - 1440): ";
        if (!(cin >> totalMinutes) || totalMinutes < 1 || totalMinutes > 1440) {
            cout << "Invalid input. Using default 25 mins." << endl;
            totalMinutes = 25;
            cin.clear();
            cin.ignore(1000, '\n');
            this_thread::sleep_for(chrono::seconds(1));
        }

        int timeLeft = totalMinutes * 60;
        bool isPaused = false;

        printHeader();
        
        while (timeLeft >= 0) {
            // Check for key presses (Windows specific)
            if (_kbhit()) {
                char key = tolower(_getch());
                if (key == 'p') {
                    isPaused = !isPaused;
                    cout << (isPaused ? "\n[PAUSED] Press 'P' to Resume..." : "\n[RESUMED]                     ");
                }
                else if (key == 'r') {
                    cout << "\n[RESETTING...]" << endl;
                    break; // Breaks inner loop to restart the timer
                }
                else if (key == 'q') {
                    quit = true;
                    break;
                }
            }

            if (!isPaused) {
                displayTime(timeLeft);
                this_thread::sleep_for(chrono::seconds(1));
                timeLeft--;
            }

            if (timeLeft < 0) {
                cout << "\n\nSESSION COMPLETE! Great job." << endl;
                cout << "Press any key to start a new session or 'Q' to quit." << endl;
                char endKey = _getch();
                if (tolower(endKey) == 'q') quit = true;
                break;
            }
            
            if (quit) break;
        }
    }

    cout << "\nClosing Timer. Stay focused!" << endl;
    return 0;
}