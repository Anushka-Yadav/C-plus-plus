#include <iostream>

using namespace std;

int main() {
    int a, b, temp;

    // Get input from the user
    cout << "Enter the value of A: ";
    cin >> a;

    cout << "Enter the value of B: ";
    cin >> b;

    // Print the values before swapping
    cout << "Before Swapping" << endl;
    cout << "A = " << a << "\t\tB = " << b << endl;

    // Swap the numbers using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Print the values after swapping
    cout << "After Swapping" << endl;
    cout << "A = " << a << "\t\tB = " << b << endl;

    return 0;
}
