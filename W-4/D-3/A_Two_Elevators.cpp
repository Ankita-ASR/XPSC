
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    ll a, b, c;
    cin >> a >> b >> c;
    ll  l2,l1 = a - 1;
    if (b < c) {
        l2 = (c - b) + (c - 1);
    } else if (b > c) {
        l2 = (b - c) + (c - 1);
    }
    if (l1 == l2) {
        cout << "3" << '\n';
    } else if (l1 < l2) {
        cout << "1" << '\n';
    } else {
        cout << "2" << '\n';
    }
   }
}