#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long current_sum = 0;
    int left = 0;
    int min_length = INT_MAX;

    for (int i = 0; i < n; i++) {
        current_sum += a[i];
        
        while (current_sum >= s) {
            min_length = min(min_length, i - left + 1);
            current_sum -= a[left];
            left++;
        }
    }
    if (min_length == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min_length << endl;
    }

    return 0;
}
