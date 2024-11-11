#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        set<int> res;
        for (int i = n - 1; i >= 0; i--) {
         
            if (res.find(A[i]) != res.end()) {
                break;
            } else {
                res.insert(A[i]);  
            }
        }
        
        cout << n-res.size() << endl;
    }

}
