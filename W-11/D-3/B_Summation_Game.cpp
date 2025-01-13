#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t; 
    cin >> t;
    while (t--) 
       {
         int n, k, x;
    cin >> n >> k >> x;
    
    vector<int> A(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> A[i];
    sort(A.begin() + 1, A.end(), greater<int>());
 for (int i = 1; i <= n; i++) A[i] += A[i - 1];
   int ans = -1e9;
    for (int i = 0; i <= k; i++) {
        int remaining = min(i + x, n);
        ans = max(ans, A[n] - 2 * A[remaining] + A[i]);
    }
    
    cout << ans << "\n";}
}
