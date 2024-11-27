#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
  cin >> t;
  while (t--) {
        int N;
     cin >>N ;
        vector<int> v(N);
   int m = (N+1)*100,n=m/2;

        for (int i=0; i<N; i++) {
        cin>>v[i];
        }
int total = accumulate(v.begin(), v.end(), 0);
      int min= n-total;
      if  (min>100) {
            cout << -1 << endl;
        } 
   else if (min <= 0) {
    cout << 0 << endl;}
    else {
           cout <<  min << endl;
        }
    }
}
