#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

   
        int pos = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i + 1]) {
                pos = i;
                break;
            }
        }

        if (!pos)   cout << "Yes\n";
         else {
            bool isValid = true;
            for (int i = pos + 1; i <= n; i++) {
                if (i == n) {
                    if (a[i] > a[1]) {
                        isValid = false;
                        break;
                    }
                } else {
                    if (a[i] > a[i + 1]) {
                        isValid = false;
                        break;
                    }
                }
            }
            cout << (isValid ? "Yes\n" : "No\n");
        }
    }
}
