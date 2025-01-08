#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
       vector<int>v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
     cout<<1<<" ";
     int mx=v[0];
     for(int i=1;i<n;i++){
       if(mx<v[i]) {
        mx=v[i];
        cout <<1<<" ";
        }
       else 
         cout<<0<<" ";
       } 
       cout<<endl;
    }
}