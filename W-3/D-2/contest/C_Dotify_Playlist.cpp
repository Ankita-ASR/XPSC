#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 int t;
 cin>> t;
      while(t--){
      int k,n,l;
        cin >>n>>k>>l;
 vector<int>v;
 long long res=0;
 for (int i = 0; i < n; i++) {
        int mi,li;//key l size m
        
        cin >> mi >> li;
        if(li==l){
           v.push_back(mi);
        }
    }
  if(v.size()!=0 && k <= v.size()) 
  {
 sort(v.begin(), v.end(),greater<int>());


 for(int i=0;i<k;i++)
 {
    res+=v[i];
  
 }
 cout<< res<<endl;
  }
  else cout<<"-1"<<endl;
}
}
