#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
  cin >> t;
  while (t--) {
        int N;
     cin >>N ;
        vector<int> v(N-1),res(N);
        for (int i=0; i<N-1; i++) {
        cin>>v[i];
        }
   sort(v.begin(), v.end());
   int a=1;
   res[0]=a;
   for (int i=1; i<N; i++) {
      res[i]= v[i-1]-a;
      a=res[i];
      }
       for (int i=0; i<N; i++) {
        cout<<res[i]<<" ";
        }
        cout <<endl;
    }
}
