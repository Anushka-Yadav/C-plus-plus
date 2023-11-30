#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int positiveCount = 0, negativeCount = 0;

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
    
    // Count positive and negative numbers
    if (num1 > 0) {
        positiveCount++;
    } else if (num1 < 0) {
        negativeCount++;
    }
    
    if (num2 > 0) {
        positiveCount++;
    } else if (num2 < 0) {
        negativeCount++;
    }
    
    if (num3 > 0) {
        positiveCount++;
    } else if (num3 < 0) {
        negativeCount++;
    }
    
    if (num4 > 0) {
        positiveCount++;
    } else if (num4 < 0) {
        negativeCount++;
    }
    
    if (num5 > 0) {
        positiveCount++;
    } else if (num5 < 0) {
        negativeCount++;
    }
    
    // Print the result
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;

    return 0;
}
