#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, bad = 0;
   cin >> n >> k;
 vector<int> p(n);
for (int i = 0; i < n; i++) {
    cin >> p[i];
      if ((--p[i]) % k != i % k) bad++;
        }
        cout << (bad == 0 ? 0 : (bad == 2 ? 1 : -1)) << '\n';
    }
    return 0;
}
