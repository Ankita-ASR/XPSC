#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--)
 {
int n;
cin>>n;
string s,ss;
ss="Timur";
cin>>s;
sort(ss.begin(),ss.end());
sort(s.begin(),s.end());
 if(n==5){
if(s==ss){
cout<<"YES"<<endl;
}
 else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
}
}