#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        ll n, one = 0, zero = 0;
        string s;
        cin >> n >> s;

        for (char e : s) {
            if (e == '1') {
                one++;
            } else {
                zero++;
            }
        }
 ll mn = min(one, zero);
        cout << (mn % 2 == 0 ? "Ramos" : "Zlatan") << "\n";
    }
}
