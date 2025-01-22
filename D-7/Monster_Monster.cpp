 #include <bits/stdc++.h>
using namespace std;
 int main() {
  int t;
   cin >> t; 
    while (t--) {
         long long n,x,s=0;
        cin >> n >> x;
        vector< long long> v(n);
        for (int i=0; i<n;i++) {
            cin >> v[i];
        }
  sort(v.rbegin(), v.rend());
      for (int i = 0; i<n; i++) {
        s = max(s, (v[i] + i*x));
        }
        cout <<s<< '\n';
    }
}
