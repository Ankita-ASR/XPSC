#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)  cin>>x;
    sort(a.begin(),a.end());
    cout<<a[n/2]<<endl;
}  
}