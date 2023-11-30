#include <iostream>

using namespace std;

int main() {
    int totalDays;
    
    cout << "Input no. of days: ";
    cin >> totalDays;
    
    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int months = remainingDays / 30;
    int days = remainingDays % 30;
    
    cout << years << " Year(s)" << endl;
    cout << months << " Month(s)" << endl;
    cout << days << " Day(s)" << endl;
    
    return 0;
}
