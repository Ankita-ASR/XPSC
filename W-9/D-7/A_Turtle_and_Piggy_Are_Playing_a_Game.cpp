#include <bits/stdc++.h>
using namespace std;
int solve(int n) {
    int result = 0;
    while (n >>= 1) { 
        ++result;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
          int l,r;
        cin >>l>> r;
        cout << solve(r) << '\n';
    }
    return 0;
}