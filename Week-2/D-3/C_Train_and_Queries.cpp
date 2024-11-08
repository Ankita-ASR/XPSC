#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n,q;
      cin >> n >> q;
      map<int, set<int>> mp;
      for (int i = 1;i <= n;i++) {
         int x;
         cin >> x;
         mp[x].insert(i);
      }
while(q--) 
{
         int a, b;
         cin >> a >> b;
         if ((mp.find(a) == mp.end()) || (mp.find(b) == mp.end())) {
            cout << "NO" << '\n';
         }
         else {
            int s, e;
            s = *mp[a].begin();//  use* for value 
           auto it = -- mp[b].end();
            e = *it; //use rbegin() instead
            if (s < e) {
               cout << "YES" << '\n';
            }
            else {
               cout << "NO" << '\n';
            }
         }
      }
   }
}