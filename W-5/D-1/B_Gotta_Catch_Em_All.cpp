#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
      int mn= INT_MAX;
      int n,m=0,x,y,s1=0,s2=0; 
      cin >> n >> x >>y;
      vector<int>v(n);
  for (int i = 0; i < n; ++i) {
      cin>>v[i];
      s1+=v[i]*x;
    }
    mn=min(mn,s1);
    sort(v.rbegin(),v.rend());
      for (int i = 0; i < n; ++i)
    {
   s1-= v[i]*x;
   s1+=y;
   mn=min(mn,s1);
}
 cout<<mn<<endl;
}
}
