#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m=0, s=0 ;
        cin>>n;
        vector<int>a(n),b(n);
 for(int i=0;i<n;i++)
 {
   cin>>a[i];
 } 

 for(int i=0;i<n;i++)
 {
   cin>>b[i];
 }
 for(int i=0;i<n;i++){
    if(i<n-1){
if(a[i]>b[i+1]){
 m+=a[i];
 s+=b[i+1];
   }
    }
    else m+=a[i];

  }
   cout<<m-s<<endl;
  }
}