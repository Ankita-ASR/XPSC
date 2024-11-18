#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
   while(t--){
     int n, k;
    cin >> n >> k;
     if (n==0 || k==0) {
                cout << "0" << '\n'; 
        }
        
else {
         int  mn =min(n,k);
         cout << mn%3 << '\n';
}
}
}
