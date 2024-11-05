#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x,val;
cin>>n>>x;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=0;i<v.size();i++){
if(v[i]!=x)
cout<< v[i]<<" ";
}
}