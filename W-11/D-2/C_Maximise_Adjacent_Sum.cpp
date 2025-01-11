#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    while(x--){
        long long n,c,sum=0;
        cin>>n;
    vector<long long int>v(n);
   for(int i=0;i<n;i++) {
        cin>>  v[i];
        sum+=v[i];
     }
   sort(v.begin(), v.end());
   sum = 2*sum-v[0]-v[1];
     cout<<sum<<endl;
    }
}