import time
import os
import sys

def clear_screen():
    """Clears the terminal screen based on the OS."""
    os.system('cls' if os.name == 'nt' else 'clear')

def print_header():
    clear_screen()
    print("========================================")
    print("       PYTHON SCIENTIFIC TIMER          ")
    print("========================================")

def start_timer():
    print_header()
    
    # Input Validation
    try:
        user_input = input("Enter focus minutes (1 - 1440) [Default 25]: ")
        if user_input == "":
            total_minutes = 25
        else:
            total_minutes = int(user_input)
            
        if not (1 <= total_minutes <= 1440):
            print("Out of range. Setting to 25 minutes.")
            total_minutes = 25
            time.sleep(1.5)
    except ValueError:
        print("Invalid input. Setting to 25 minutes.")
        total_minutes = 25
        time.sleep(1.5)

    seconds_left = total_minutes * 60

    print_header()
    print(f"Goal: {total_minutes} minutes")
    print("Press Ctrl+C to stop the timer.\n")

    try:
        while seconds_left >= 0:
            hours, remainder = divmod(seconds_left, 3600)
            minutes, seconds = divmod(remainder, 60)

            # Format the time string
            if hours > 0:
                time_str = f"{hours}h {minutes}m {seconds:02d}s"
            else:
                time_str = f"{minutes}m {seconds:02d}s"

            # Check for the final minute warning
            status = " [FINAL MINUTE!]" if 0 < seconds_left <= 60 else ""
            
            # \r (Carriage Return) keeps the timer on the same line
            # end="" prevents a new line
            sys.stdout.write(f"\rFocus Session: {time_str}{status}")
            sys.stdout.flush()

            time.sleep(1)
            seconds_left -= 1

        print("\n\nSESSION COMPLETE! Great job.")
        # ASCII Bell sound (works on many terminals)
        print('\a') 

    except KeyboardInterrupt:
        print("\n\nTimer stopped by user. Stay focused!")

if __name__ == "__main__":
    start_timer()