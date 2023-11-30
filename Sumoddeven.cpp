#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int oddSum = 0;

    // Get input from the user
    cout << "Input the first number: ";
    cin >> num1;

    cout << "Input the second number: ";
    cin >> num2;

    cout << "Input the third number: ";
    cin >> num3;

    cout << "Input the fourth number: ";
    cin >> num4;

    cout << "Input the fifth number: ";
    cin >> num5;

    // Check and sum odd values
    if (num1 % 2 != 0) {
        oddSum += num1;
    }

    if (num2 % 2 != 0) {
        oddSum += num2;
    }

    if (num3 % 2 != 0) {
        oddSum += num3;
    }

    if (num4 % 2 != 0) {
        oddSum += num4;
    }

    if (num5 % 2 != 0) {
        oddSum += num5;
    }

    // Print the sum of odd values
    cout << "Sum of odd values: " << oddSum << endl;

    return 0;
}
