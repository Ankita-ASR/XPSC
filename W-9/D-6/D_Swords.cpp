#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
 return __gcd(a,b);
}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
   long long x = *max_element(a.begin(), a.end());
   long long z = 0; 
    for (int i = 0; i < n; i++) {
        z = gcd(z, x - a[i]);
    }

    long long y = 0;
    for (int i = 0; i < n; i++) {
        y += (x - a[i]) / z;
    }
    cout << y << " " << z << endl;
}
