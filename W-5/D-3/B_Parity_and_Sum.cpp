#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, maxOdd = 0;
    vector<int> even;
    cin >> n;
    for (int i=0;i<n; i++) {
        int cur;
        cin >> cur;
        if (cur & 1) {
            maxOdd = max(maxOdd, cur); 
        } else {
            even.push_back(cur); 
        }
    }
    if (maxOdd == 0 || even.empty()) {
        return 0;
    }
 sort(even.begin(), even.end()); 

    for (int e : even) {
        if (maxOdd < e) {
            return even.size() + 1;
        }
        maxOdd += e; 
        if (maxOdd > even.back()) {
            return even.size(); 
        }
    }

    return even.size(); 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n'; 
    }

}
