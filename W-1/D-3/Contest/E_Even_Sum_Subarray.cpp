#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 int t;
    cin >> t;
    while (t--) {  
   int n;
   cin >> n ;
   vector<int>v(n);
   int sum=0;
   int m1= 0,m2=0;
   int fO=-1;
    
for(int i=0;i<n ; i++){
  cin>>v[i];
  sum+=v[i];
  if(sum%2==0)
  {
  m1= max(m1,i+1) ;
  }
  else 
   {
    int o= sum+v[i+1];
    if(o%2 !=0)
    if(fO!=i){
        m=max(m,i-fO);
    }
  }
}
cout<< m <<endl;
}
return 0;
}