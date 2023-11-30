#include <iostream>
using namespace std;

int main() {
    int inputSeconds;
    cout << "Input seconds: ";
    cin >> inputSeconds;

    int hours, minutes, seconds;

    hours = inputSeconds / 3600;         // 1 hour = 3600 seconds
    inputSeconds %= 3600;                // Remaining seconds after extracting hours
    minutes = inputSeconds / 60;         // 1 minute = 60 seconds
    seconds = inputSeconds % 60;         // Remaining seconds after extracting minutes

    cout << "There are:" << endl;
    cout << "H:M:S - " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
