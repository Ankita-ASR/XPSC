#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        ll ans = 0, cnt = 0;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

 
        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                cnt++;
            } else {
                if (cnt >= k) {
                    ans += (cnt - k + 1) * (cnt - k + 2) / 2;
                }
                cnt = 0;
            }
        }

        if (cnt >= k) {
            ans += (cnt - k + 1) * (cnt - k + 2) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}
