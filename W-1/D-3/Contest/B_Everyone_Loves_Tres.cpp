#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 1 || n == 3) {
            cout << "-1" << endl;
            continue;
        }
        if (n == 2) {
            cout << "66" << endl;
            continue;
        }
        if (n % 2 == 0) {
            for (int i = 0; i < n - 2; i++) {
                cout << "3";
            }
          
                cout << "66";
            
            cout << endl;
        } else {
            for (int i = 0; i < (n - 4); i++) {
                cout << "3";
            }
            cout << "6366" << endl;
        }
    }
}