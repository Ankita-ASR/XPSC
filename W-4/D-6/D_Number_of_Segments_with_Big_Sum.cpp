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
    long long count = 0;

    for (int right = 0; right < n; ++right) {
        current_sum += a[right];

  while (current_sum >= s) {
            count += (n - right);
            current_sum -= a[left];
            ++left;
        }
    }

    cout << count << endl;
    return 0;
}
