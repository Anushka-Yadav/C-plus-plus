#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Get input from the user
    cout << "Input the first number: ";
    cin >> num1;
    
    cout << "Input the second number: ";
    cin >> num2;
    
    // Check if one number is a multiple of the other
    if (num1 % num2 == 0 || num2 % num1 == 0) {
        cout << "The numbers are multiples of each other." << endl;
    } else {
        cout << "The numbers are not multiples of each other." << endl;
    }

    return 0;
}
