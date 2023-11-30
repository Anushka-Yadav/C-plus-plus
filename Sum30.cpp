#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Get input from the user
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Check conditions and print the result
    if (num1 == 30 || num2 == 30 || num1 + num2 == 30) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
