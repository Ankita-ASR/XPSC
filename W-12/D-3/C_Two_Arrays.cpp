#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long power(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b % 2) res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}
long long C(int n, int k) {
    if (k > n) return 0;
    
    long long num = 1, den = 1;
    for (int i = 0; i < k; i++) {
        num = (num * (n - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }
    return (num * power(den, MOD - 2, MOD)) % MOD; 
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << C(n + 2 * m - 1, 2 * m) << endl;
    return 0;
}
