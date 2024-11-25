#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
      int mn= INT_MAX;
      int n,m=0,x,k,s1=0,rem,s2=0; 
      cin >> n >> k;
      vector<int>v(n),res;

 for (int i = 0; i < n; ++i) {
 cin>>v[i];
 if(v[i]>=k){
res.push_back(v[i]);
}
}

 if(res.size()==0) cout<<"-1"<<endl;
 else
 {
for (int i = 0; i <res.size(); ++i)
 {
rem=res[i]%k;
mn=min(rem,mn);
}
 cout<<mn<<endl;
}
}
}
