#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
   int n, k;
   cin >> n >> k;
   vector<int> v(n);
   for (int i = 0; i < n; i++) {
       cin >> v[i];
   }
   int p = 0;
   for (int i = 0; i < n; i++) {
       if (p + 1 == v[i]) 
           p = v[i];
   }
   cout << (n - p + k - 1) / k << "\n";
   }
 
}