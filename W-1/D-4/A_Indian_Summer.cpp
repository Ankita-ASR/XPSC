#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    set<pair<string, string>> s;
    cin >> n;
    for (int i = 0; i < n; i++) { 
        pair<string, string> p;
        cin >> p.first >> p.second;
        s.insert(p); 
    }
    cout << s.size(); 
    return 0;
}
