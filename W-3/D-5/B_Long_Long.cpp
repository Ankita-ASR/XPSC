#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;
        ll sum=0;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += abs(a[i]); 
        }

   
        int op = 0; 
        bool inNeg = false;
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                if (!inNeg) {
                 
                    op++;
                    inNeg = true;
                }
            } else if (a[i] > 0) {
              
                inNeg  = false;
            }
        }

        cout << sum << " " << op << endl;
    }

    return 0;
}
