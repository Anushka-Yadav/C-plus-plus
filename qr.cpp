#include <iostream>

using namespace std;

int main() {
    int dividend, divisor;
    
    // Get input from the user
    cout << "Enter the dividend: ";
    cin >> dividend;
    
    cout << "Enter the divisor: ";
    cin >> divisor;

    // Calculate the quotient and remainder
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    
    // Print the result
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    
    return 0;
}
