#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
       int n; 
       cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
    ll ans = 0;
    int ptr = 0;
    while(ptr < n && v[ptr] == 0)
        ptr++;
    for(int i = ptr; i < n-1; ++i){
        ans += v[i];
        if(v[i] == 0) ans++;
    }
    cout << ans << "\n";
  }
}