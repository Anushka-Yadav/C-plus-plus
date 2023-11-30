#include <iostream>

using namespace std;

int main() {
    double kmPerHour, milesPerHour;

    // Get input from the user
    cout << "Enter speed in kilometers per hour (km/h): ";
    cin >> kmPerHour;

    // Convert km/h to mph
    milesPerHour = kmPerHour * 0.6213712;

    // Print the result
    cout << "Speed in miles per hour (mph): " << milesPerHour << " mph" << endl;

    return 0;
}

