#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
       int n;
       cin>>n;
      string s;
     cin>>s;
  set<char> st(s.begin(), s.end());
        map<char, char> m;
     auto sit=st.rbegin();
        for (auto it = st .begin(); it!=st.end();it++) {
          m[*it]= *sit;
          sit++;
        }
        string e;
        for (char c : s) {
            e+= m[c];
        }

        cout << e << '\n';
    } 
 }


