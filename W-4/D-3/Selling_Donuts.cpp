#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long   m,n, x=0;
        cin >>n >>m;
     vector<int>a(n);
        for(int i=0;i<n;i++)
       {
         cin>>a[i];
       }
       vector<int> b(m); 
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
       for (int i = 0; i < m; i++) {
     if (a[(b[i] - 1)] > 0) {
        a[(b[i] - 1)]--;  
       } 
        else {
        x++;  
     }
        }
        cout<<x<<endl;
   }
}
 