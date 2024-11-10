#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int slen, clen, x;
        cin >> slen >> clen;
        
        string s, c;
        cin >> s;
        
        set<int> st;
        for (int i = 0; i < clen; i++) {
            cin >> x;
            st.insert(x - 1);  
        }
        
        cin >> c;
        sort(c.begin(), c.end());
        
        int i = 0;
        for (auto x : st) {
            if (i < c.size()) {
                s[x] = c[i];
                i++;
            }
        }
        
        cout << s << endl;
    }
}
