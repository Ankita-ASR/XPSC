#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        char l1 = a.back(), l2 = b.back();
        
        if (a == b) {
            cout << "=" << '\n';
        } else if (l1 > l2) {
            cout << "<" << '\n';
        } else if (l1 < l2) {
            cout << ">" << '\n';
        } else if (l1 == l2) {
            if (l1 == 'S') {
                if (a.size() < b.size()) {
                    cout << '>' << '\n';
                } else {
                    cout << '<' << '\n';
                }
            } else if (l1 == 'L') {
                if (a.size() < b.size()) {
                    cout << '<' << '\n';
                } else {
                    cout << '>' << '\n';
                }
            }
        }
    }
}
