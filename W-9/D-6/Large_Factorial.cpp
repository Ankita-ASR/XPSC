 
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      
    long long n, ans = 1;
      cin >> n;
      for (long long i = 1;i <= n;i++) {
         ans = ( ans % MOD * i % MOD) % MOD;
      }
      cout << ans << '\n';

   }
 
}