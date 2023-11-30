#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    // Get input from the user
    cout << "Enter temperature in Centigrade (Celsius): ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Print the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}
