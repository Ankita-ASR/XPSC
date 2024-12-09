#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     double  cntA=0,cntB=0;
      double n,m,k,s=0;
        cin>>n>>m>>k;
        cntA= ceil(n /m);
        cntB= ceil((n-k)/m )+1;
        if(k>=n)cout<<"1\n";
        else
        cout<<min(cntA,cntB)<<"\n";
       
    }
}