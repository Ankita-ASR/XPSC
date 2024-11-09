#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if (c == 'g') {
            cout << 0 << endl;
        }
else{
 s += s;
 int M = 0;
 int lastG = -1;
        for (int i = 2 * n - 1; i >= 0; i--) {
            if (s[i] == 'g') {
                lastG = i;
            }
            if (s[i] == c && lastG != -1) {
                M = max(M, lastG - i);
            }
        }
     cout << M << endl;}   
    }
}
