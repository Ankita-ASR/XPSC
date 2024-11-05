#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--){
     int m,n,d;
   cin>>m>>n>>d;
   if((d*24*60)>= (m*n)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   }
   
}