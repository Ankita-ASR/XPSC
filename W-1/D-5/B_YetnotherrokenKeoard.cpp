#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
      string s;
      cin >> s;
      vector<int> ch1, ch2;
      for (int i = 0; i < s.size(); i++) {
         if (s[i] != 'b' && s[i] != 'B') {
            if (islower(s[i])) {
               ch1.push_back(i);  
            } else {
               ch2.push_back(i);
            }
         } else if (s[i] == 'b' && !ch1.empty()) {
            s[ch1.back()] = '1';
            ch1.pop_back();
         } else if (s[i] == 'B' && !ch2.empty()) {
            s[ch2.back()] = '1';
            ch2.pop_back();
         }
      }
      for (long long int i = 0; i < s.size(); i++) {
         if (s[i] != 'b' && s[i] != 'B' && s[i] != '1') {
            cout << s[i];
         }
      }
      cout << '\n';
   } 
}
