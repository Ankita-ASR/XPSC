#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int m;
        cin >> m;
        vector<int> r(n, 0), l(n, 0);
        for (int i = 1; i < n; i++) {
            r[i] = r[i - 1] + min(1, a[i] - a[i - 1]);
        }
        for (int i = n - 2; i >= 0; i--) {
            l[i] = l[i + 1] + min(1, a[i + 1] - a[i]);
        }

        while (m--) {
            int x, y;
            cin >> x >> y;
            x--; y--;

            if (x < y) {
                cout << (r[y] - r[x]) << "\n";
            } else {
                cout << (l[y] - l[x]) << "\n";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();

}
