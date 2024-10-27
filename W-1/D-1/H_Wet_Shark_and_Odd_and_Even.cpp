#include <bits/stdc++.h>
using namespace std;

int main(){
long long n,oc=0,ec=0, Min=LLONG_MAX;
cin>>n;
long long sum=0;
vector<long long>v(n);
for(int i=0;i<n;i++){
   cin >> v[i];
   sum +=v[i];
   if(v[i]%2!=0){
 Min=min(Min,v[i]);
   }
   //else ec++;
}
/*
if(oc%2!=0 && ec==0)
{
    cout<<"0";
}
else
{*/
if(sum%2==0){
    cout<<sum;
}
else
{
cout<< sum-Min;
}
}


