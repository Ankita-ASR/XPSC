#include <bits/stdc++.h>
using namespace std;

bool isvowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        string s;
        cin >> s;
        
        int count = 0;
        bool flag = true;
        
        for (int i = 0; i < s.length(); i++) {
            if (!isvowel(s[i])) { 
                count++;
                if (count >= 4) {
                    flag = false;
                    break; 
                }
            } else {
                count = 0; 
            }
        }
       if (!flag) cout << "NO\n";
       else cout << "YES\n";
    }
}
