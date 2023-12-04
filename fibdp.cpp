#include <iostream>
using namespace std;

int dp[1000];

int fib(int n) {
    if (n == 0 || n == 1) return n;
    
    if (dp[n] != -1) {
        return dp[n];
    }

    int res = fib(n - 1) + fib(n - 2);
    dp[n] = res;
    return dp[n];
}

int main() {
    fill_n(dp, 1000, -1);
    cout << fib(5) << endl;
    return 0;
}
