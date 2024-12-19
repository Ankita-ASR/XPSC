#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n >> a;
        int k = abs(a - 1);

        for (int i = 2; i <= n; ++i) {
            cin >> a;
            k = __gcd(k, abs(a - i));
        }

        cout << k << "\n";
    }
}
