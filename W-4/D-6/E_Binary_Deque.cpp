#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (k > sum ) {
            cout << -1 << '\n';
        } 
    else {
      int s = 0, i = 0, j = 0;
      sum = 0;
 while (sum < k) {         
     sum += a[i];
     i += 1;
     }
 while (i < n && a[i] == 0) {
      i += 1;
    }
    s = i;
   while (i < n) {
  if (a[i] == 0) {
         s = max(s, i - j + 1);
       i += 1;
    }
     else { 
        while (a[j] != 1) 
     {    
          j += 1;
      }
           j += 1;
          s = max(s, i - j + 1);
           i += 1;
          }
  }
    cout << n-s << '\n';
        }
    }
}