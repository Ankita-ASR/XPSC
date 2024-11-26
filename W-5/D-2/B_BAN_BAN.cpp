#include<bits/stdc++.h>
using namespace std;
int main() {
 int t;
    cin >> t;
    while (t--) {
    	int n, count, l= 1;
        cin >> n;
        count = n / 2 + n % 2;
        int x = 3 * n;
        cout << count << '\n';
        for(int i = 0 ; i < count ; i++) {
            cout << l << " " << x << '\n';
            l += 3;
            x -= 3;
        }
    }
}