#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--){
     int n;
     cin>>n;
    string a,b;
    cin>>a>>b;
    int p1=0,p2=0 ,change=0;
    for(int i=0;i<n;i++){
      if(a[i]=='R' && b[i]=='S' || a[i]=='P' && b[i]=='R' || a[i]=='S' && b[i]=='P') {
        p1++;
      }
     if(b[i]=='R' && a[i]=='S' ||b[i]=='P' && a[i]=='R' || b[i]=='S' && a[i]=='P') {
        p2++;
      } 
      }
    if(p1<p2){
   while(p1+change<=p2){
    p2--;
    change++;
    } 
  cout<<change <<'\n';   
   }
 else if(p1>p2)
 cout <<"0"<<'\n'; 
else cout<<"1"<<'\n';
}
 }