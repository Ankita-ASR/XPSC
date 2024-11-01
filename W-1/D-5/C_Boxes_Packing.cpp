#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val,cnt=0;
    cin >>n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        m[val]++;
    }
    int mx= 0;
    for ( auto c : m) {
        mx = max(mx,c.second);
    }
    cout << mx << endl;
}
