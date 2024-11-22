#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c; 
    cin >> n >> c;

    vector<int> costs;
    for (int i = 1; i <= n; ++i) {
        int x; 
        cin >> x;
        costs.push_back(x + i); 
    }

    sort(costs.begin(), costs.end());

    int ans = 0;
    for (int cost : costs) {
        if (cost > c) break; 
        c -= cost; 
        ++ans; 
    }

    cout << ans << "\n"; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t; 
    while (t--) {
        solve(); 
    }
}
