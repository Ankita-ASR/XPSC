#include <bits/stdc++.h>
using namespace std;

long long min_jumps(long long x, long long y, long long k) {
    long long jumps_x = (x + k - 1) / k;  
    long long jumps_y = (y + k - 1) / k;  

    if (jumps_y >= jumps_x) {
        return 2 * jumps_y;
    } else {
        return 2 * jumps_x - 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        cout << min_jumps(x, y, k) << endl;
    }
    return 0;
}
