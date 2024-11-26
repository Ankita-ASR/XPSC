#include<bits/stdc++.h>
using namespace std;
int main() {
 int t;
    cin >> t;
    while (t--) {
       int n, count, l= 1;
        cin >> n;
        if(n<=1)cout<<"NO\n";
        else if(n%2 != 0)
        {
          cout<<"NO\n";
        }
    	 else
          {
        cout << "YES" << '\n';
        for (int i = 0; i < n / 2; i++) {
            if (i % 2 == 0) 
            cout << "AA";
            else 
            cout << "BB";
        }
        cout << '\n';
    }
   }
   
}