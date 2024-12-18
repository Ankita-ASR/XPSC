#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >>t;
while(t--){
int cnt=0,n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){  
    cin>>v[i];
}
bool flag= true;
while(flag){
flag=false;
for(int i=0;i<n;i++){
  if(i<n-1){
        if(v[i]<v[i+1]){
            v[i]=v[i+1];
            flag= true;
        }
    
}}
if(flag) cnt++;
}
cout<<cnt<<endl;
}
}