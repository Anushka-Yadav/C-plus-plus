#include <iostream>
#include <string>

using namespace std;

int main() {
    int monthNumber;

    // Get input from the user
    cout << "Input an integer between 1 and 12: ";
    cin >> monthNumber;
    
    // Check if the input is within the valid range
    if (monthNumber >= 1 && monthNumber <= 12) {
        string month;

        // Use a switch statement to map the number to the month
        switch (monthNumber) {
            case 1:
                month = "January";
                break;
            case 2:
                month = "February";
                break;
            case 3:
                month = "March";
                break;
            case 4:
                month = "April";
                break;
            case 5:
                month = "May";
                break;
            case 6:
                month = "June";
                break;
            case 7:
                month = "July";
                break;
            case 8:
                month = "August";
                break;
            case 9:
                month = "September";
                break;
            case 10:
                month = "October";
                break;
            case 11:
                month = "November";
                break;
            case 12:
                month = "December";
                break;
        }

        // Print the corresponding month
        cout << "The month is: " << month << endl;
    } else {
        cout << "Invalid input. Please enter an integer between 1 and 12." << endl;
    }

    return 0;
}
