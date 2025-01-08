#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t; 
    cin >> t; 
    while (t--) {
        int n,cnt=0; 
        cin >> n; 
        string s1, s2;
    cin >> s1 >> s2;
    cnt=count(s1.begin(), s1.end(), '1');
 if(s1!=s2)   cout<< "YES"<<endl;
   else  if(cnt%2==0) cout<< "NO"<<endl;
     else cout<< "YES"<<endl;
    }
}