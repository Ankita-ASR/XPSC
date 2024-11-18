#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
   while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s;
 int cntz=0,cnto=0;
 bool f1=false,f2=false;
 for(int i=0;i<n;i++){
     if(s[i]=='1' && !f1)
     {
         f1= true;
         f2=false;
         cnto++;
     }
     else if(s[i]=='0' && !f2) {
         f2= true;
         f1=false;
         cntz++;
     }
 }
 cout<< min(cntz,cnto) <<endl;
}
}