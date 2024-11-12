#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 int t;
 cin>> t;
      while(t--){
      int x,n,y;
        cin >>n>>x>>y;
        int res;
       
        if(n%2==0) {
            res=max(x*n , (n/2*y));
            cout << res << endl;
        }
        else 
        {
         res = max(x * n, ((n / 2) * y) + x);
         cout << res << endl;
        }
}
}
