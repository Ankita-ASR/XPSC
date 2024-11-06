#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    int n, t;
    cin >> n >> t;
    vector<int>dp(n+1,0);
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
      set<int> seen;
 
     for (int i = n; i >= 1; i--) {
        seen.insert(a[i]);    
        dp[i] = seen.size();   
    }
    while(t--) {
        int m;
        cin >> m;
      cout<<dp[m]<<endl;
    }
 
    return 0;
}