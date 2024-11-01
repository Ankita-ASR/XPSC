#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   map<string, int> m;
   while (t--) {
    string s;
    cin >> s;
    if (m[s] > 0) {
        cout << s << m[s] << '\n';
        m[s]++;
    } else {
    m[s] = 1;
    cout << "OK" << '\n';
    }
   }
  
}
