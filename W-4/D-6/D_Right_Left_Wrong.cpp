#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
     int n;
    cin >> n;
    vector<long long> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        prefixSum[i] = prefixSum[i - 1] + x;
    }
    
    string s;
    cin >> s;
    
    long long ans = 0;
    int l = 0, r = n - 1;
    
    while (r > l) {
        while (l < n && s[l] == 'R') {
            ++l;
        }
        while (r >= 0 && s[r] == 'L') {
            --r;
        }
        if (l < r) {
            ans += prefixSum[r + 1] - prefixSum[l];
            l++;
            r--;
        }
    }
    
    cout << ans << endl;
}
    
}
