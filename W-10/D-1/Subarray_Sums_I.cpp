#include<bits/stdc++.h>
using namespace std;
int count(int n, int x, vector<int>& a) {
    unordered_map<long long, int> prefixSumCount;
    long long prefixSum = 0;
    int count = 0;
    prefixSumCount[0] = 1;

    for (int i = 0; i < n; ++i) {
        prefixSum += a[i];

        if (prefixSumCount.find(prefixSum - x) != prefixSumCount.end()) {
            count += prefixSumCount[prefixSum - x];
        }
        prefixSumCount[prefixSum]++;
    }

    return count;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << count(n, x, a) << endl;
    return 0;
}
