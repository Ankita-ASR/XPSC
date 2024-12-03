#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int x, y;
        cin >> x >> y;

        int m = (y + 1) / 2; 
        x -= (m * 15 - y * 4); 
        x = max(x, 0);        

        m += (x + 15 - 1) / 15;

        cout << m << endl;
    }
}
