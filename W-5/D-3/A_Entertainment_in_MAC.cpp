 #include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    if(s <= r) {
        cout << s << "\n";
    } else {
        cout << r << s << "\n";
    }
    }

}