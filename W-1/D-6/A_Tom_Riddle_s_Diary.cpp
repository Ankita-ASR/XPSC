#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   map<string, bool> mp;
   while (n--) {
    string s;
    cin >> s;
    if (mp.find(s) != mp.end()) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
        mp[s] = true;
    }
   }
}
