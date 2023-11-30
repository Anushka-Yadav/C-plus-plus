#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, time;

    // Get input from the user
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the interest rate (%): ";
    cin >> rate;

    cout << "Enter the time (years): ";
    cin >> time;

    // Calculate and print simple interest
    double simpleInterest = (principal * rate * time) / 100.0;
    cout << "Simple Interest: " << simpleInterest << endl;

    // Calculate and print compound interest
    double compoundInterest = principal * (pow(1 + rate / 100.0, time) - 1);
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}
