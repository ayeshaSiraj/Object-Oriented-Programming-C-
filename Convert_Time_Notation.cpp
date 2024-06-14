#include <iostream>
#include <cstring>

using namespace std;

    


void getTimeInput(int& hours, int& minutes) {
    cout << "Enter the hours: ";
    cin >> hours;

    cout << "Enter the minutes: ";
    cin >> minutes;
}



void convertTo12Hour(int hours, int minutes) {
    string am_or_pm;

if(hours>=12)
am_or_pm="PM";
else
am_or_pm="AM";

    if (hours == 0) {
        hours = 12;
    } else if (hours > 12) {
        hours -= 12;
    }
    cout << "The converted time is: "<< hours << ":" << minutes << endl;

    cout << "Time is in " << am_or_pm << " notation." << endl;
}

void convertTo24Hour(int hours, int minutes) {
 string am_or_pm;

if(hours>=12)
am_or_pm="PM";
else
am_or_pm="AM";
    if (am_or_pm == "PM" && hours != 12) {
        hours += 12;
    } else if (am_or_pm == "AM" && hours == 12) {
        hours = 0;
    }

    cout << "The converted time is: "<< hours << ":" << minutes << endl;
    cout << "Time is in 24-hour notation."<< endl;
}

int main() {
    int choice, hours, minutes;

    do {
        cout << "1. Convert time from 24-hour notation to 12-hour notation" << endl;
    cout << "2. Convert time from 12-hour notation to 24-hour notation" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                getTimeInput(hours, minutes);
                convertTo12Hour(hours, minutes);
                break;
            case 2:
                getTimeInput(hours, minutes);
                convertTo24Hour(hours, minutes);
                break;
            case 3:
                cout << "Exiting.........." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 3);

    return 0;
}
