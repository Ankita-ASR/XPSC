#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
  int row1  = min(a, m);
 int row2 = min(b, m);
  int rem  = 2 * m - row1  - row2 ;
 int remc = min(c, rem);
  int total  = row1  + row2 + remc ;
 cout << total  << endl;
    }
}
