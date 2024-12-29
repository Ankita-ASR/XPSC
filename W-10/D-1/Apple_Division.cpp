#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;  
    long long totalWeight = 0;
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
       totalWeight += weights[i];
    }
    long long minDiff = LLONG_MAX;
    for (int mask = 0; mask < (1 << n); mask++) {
        long long g1 = 0,g2;

        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                g1  += weights[i];
            }
        }
         g2 = totalWeight - g1;
        long long diff = abs(g1 -g2);
        minDiff = min(minDiff, diff);
    }
 cout << minDiff << endl;
}
