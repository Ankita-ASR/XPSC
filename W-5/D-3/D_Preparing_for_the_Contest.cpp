#include <bits/stdc++.h>
using namespace std;

int main() {
   int t; 
    cin >> t;
 while (t--) {
 int n, k;
 cin >> n >> k;
 vector<int> res(n);
        int pos = 0;
        for (int i = n - k; i >= 1; i--) {
            res[pos++] = i;
        }
        for (int i = n - k + 1; i <= n; i++) {
            res[pos++] =i;
        }
        for (int num : res){
            cout << num << " ";
        }
        cout << endl;
    }
}
