#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, h=0;
        cin >> n; 
     vector <int> v(n),k(n);
        
  for (int i = 0; i < n; ++i) {
   cin >> v[i]; 
 }
        for (int i = 0; i < n; ++i) 
        {
            cin >> k[i];  
        }
        
        for (int i = 0; i < n; ++i) {
            if (!(v[i] > 2 * k[i] || k[i] > 2 * v[i])) {
 
                h++;
         } } 
   cout << h << endl;
    }

}
