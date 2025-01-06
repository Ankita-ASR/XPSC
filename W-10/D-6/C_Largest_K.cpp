#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >>T;
    while(T--){
     int n,m;cin>>n>>m;
    if(n==2 )cout<<m<<endl;
    else if(n-1>m) cout<<0<<endl;
    else  cout<<m/(n-1)<<endl;
  }
   
}