#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,x,total=0;
cin>>n>>x;
vector<int>v(n);
  for (int i=0;i <n;i++) {
      cin >> v[i];  
      total+= v[i];
        }
        cout<< (total+x-1)/x<<endl;
}
}
