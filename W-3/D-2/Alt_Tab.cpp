#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    vector<string> v, res;
    unordered_set<string> seen;

    while (t--) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    reverse(v.begin(), v.end());

    for (auto x : v) {
        if (seen.find(x) == seen.end()) {
            res.push_back(x);
            seen.insert(x);
        }
    }

    for (auto x : res) {
        int n = x.size();
        cout << x[n-2] << x[n-1];
    }
}
