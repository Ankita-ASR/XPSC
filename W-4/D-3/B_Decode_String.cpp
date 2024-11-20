#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<string> v;
        int i = 0;

        while (i < n) {
            if ((i + 2 < n && s[i + 2] == '0') && (i + 3 >= n || s[i + 3] != '0')) {
                v.push_back(s.substr(i, 2));  
                i += 3;  
            } else {
                v.push_back(s.substr(i, 1));  
                i++;
            }
        }

        for (  auto  x : v) {
            if (x != "0") {
                int num = stoi(x);  
                char ans = char(num + 96);  
                cout << ans;
            }
        }
        cout << '\n';
    }

   
}
