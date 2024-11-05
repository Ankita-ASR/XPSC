#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--){
     int n;
     cin>>n;
     if(n<2){
        cout<<"0"<<endl;
         }
        else {
            int r=n%7;
            if (r>=2){
         cout<<  n/7 +1 << endl;;
            } 
         else cout<< n/7 <<endl;
        }
   }
}