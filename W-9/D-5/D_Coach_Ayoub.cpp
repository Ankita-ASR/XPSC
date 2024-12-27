#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,a,b,s;
    cin>>n>>a>>b>>s;
    if(a*(n-1)+b > s || b*(n-1)+a <s){
        cout<<"NO";

    }
    else cout<<"YES";
}
