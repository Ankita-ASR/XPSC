#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m,b;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
      cin>> b;
     int prev_min = min(a[0], b - a[0]);
        bool possible = true;

        for (int i = 1; i < n; i++) {
        
            int original = a[i];
            int transformed = b- a[i];
            if (original < prev_min && transformed < prev_min) {
                possible = false;
                break;
            }
            if (original >= prev_min && transformed >= prev_min) {
                prev_min = min(original, transformed);
            } else if (original >= prev_min) {
                prev_min = original;
            } else if (transformed >= prev_min) {
                prev_min = transformed;
            }
        }
        if (possible)  cout << "YES\n";
        else cout << "NO\n"; 
    }
}
