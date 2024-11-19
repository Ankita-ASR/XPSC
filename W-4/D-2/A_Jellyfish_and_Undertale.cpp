#include<iostream>
using namespace std;

int main() {
    long long t, a, b,n, x;
    cin >> t;
    while (t--) {
        long long cnt=0;
        cin >> a >> b >> n;
        long long s = b;  
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x < a) {
                s += x;  
            }
            else {
                cnt++;
            }
        }
        cout << s + (a-1) *cnt  << endl;  
    }
}
