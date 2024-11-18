#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int max_n_coins = min(a, s / n);

        int remaining = s - max_n_coins * n;

        if (remaining <= b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
