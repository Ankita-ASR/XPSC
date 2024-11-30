#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int count0 = 0;
        bool hasLarge = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                count0++;
            }
            if (x >= 2) {
                hasLarge = true;
            }
        }

        if (count0 <= (n + 1) / 2) {
            cout << "0\n";
        } else if (hasLarge || count0 == n) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }
}
