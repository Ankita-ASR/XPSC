#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 int t;
    cin >> t;
    while (t--) {  
   int x;
   cin >> x;
   if(x<10){
cout<<"90"<<endl;
   }
   else if(x%10==0)
  cout<< 100-x<<endl;
  else {
    x=abs(x/10)*10 +10;
    cout<< 100-x <<endl;
  }
}
}