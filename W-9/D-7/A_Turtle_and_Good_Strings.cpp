#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
          int l;
          string s;
        cin >>l>> s;
        if(s[0]==s[l-1]){
        cout<<"NO"<<endl;
        continue;
    }
    cout<<"YES"<<endl;
    }
}