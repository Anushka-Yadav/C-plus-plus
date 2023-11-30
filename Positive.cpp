#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int positiveCount = 0;
    double sumOfPositives = 0.0;

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

    // Check and calculate for positive numbers
    if (num1 > 0) {
        positiveCount++;
        sumOfPositives += num1;
    }

    if (num2 > 0) {
        positiveCount++;
        sumOfPositives += num2;
    }

    if (num3 > 0) {
        positiveCount++;
        sumOfPositives += num3;
    }

    if (num4 > 0) {
        positiveCount++;
        sumOfPositives += num4;
    }

    if (num5 > 0) {
        positiveCount++;
        sumOfPositives += num5;
    }

    // Calculate and print the average of positive numbers
    if (positiveCount > 0) {
        double averageOfPositives = sumOfPositives / positiveCount;
        cout << "Number of positive numbers: " << positiveCount << endl;
        cout << "Average of positive values: " << averageOfPositives << endl;
    } else {
        cout << "No positive numbers were entered." << endl;
    }

    return 0;
}
