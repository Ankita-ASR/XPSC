#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
int n,m,h;
cin>>n>>m>>h; 
vector<long long> car(n), pwr(m);

  for(int i=0;i<n;i++)
{
    cin>>car[i];
}

for(int i=0;i<m;i++)
{
    cin>>pwr[i];
} 
long long ans=0;

sort(car.begin(),car.end(),greater<int>());
sort(pwr.begin(),pwr.end(),greater<int>());

int x=min(m,n);
   for(int i=0;i<x;i++)
   {
       ans+= min(car[i], pwr[i]*h);
   }
cout<<ans<<endl;
   }

}