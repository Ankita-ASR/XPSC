#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
      int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mx=1,count = 1;
    for (int i = 1; i < n; i++)
  {
    if (a[i] >= a[i - 1])  count++;
    else   count = 1;
     mx=max(mx, count);
    }
    for (int i = 0; i < n; i++) {
        int f = a[i];
        a[i] *= x;
        int nw= 1, nwm = 1;
        for (int j = 1; j < n; j++) {
            if (a[j] >= a[j - 1])  nw++;
             else   nw = 1;
            nwm = max(nwm,nw);
        }
       mx = max(mx,nwm);
        a[i]= f; 
    }
 cout <<mx<< endl;
}
 }
  

