#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
     int m,n,b;
     cin>>n>>m;
     vector<int>a(n);
for(int i=0;i<n;i++) {cin>>a[i];}
cin>>b ;
if(n==1) cout<< "YES\n";
else{
for(int i=0;i<n-1;i++) {
if(a[i]>a[i+1]) {
    a[i]= b- a[i];
    cout<<a[i];
}
}
if (is_sorted(a.begin(), a.end())) {
           cout<<"YES\n";
            }
            else cout<<"NO\n";
}
}  
}
