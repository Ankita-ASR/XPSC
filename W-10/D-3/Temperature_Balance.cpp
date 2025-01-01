#include <bits/stdc++.h>
using namespace std;
int main() {  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
  int n;
  long long s=0,ans=0;
  cin>>n;
    vector<int>v(n);
        for (int i=0;i<n;i++) {
            cin >> v[i];
            s+=v[i];
ans+=abs(s);
 } cout << ans<< '\n';
  }
}