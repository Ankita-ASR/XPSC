#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> freq;
    int left = 0;
    long long count = 0;
    int unique = 0;

    for (int right = 0; right < n; ++right) {
   
        if (++freq[a[right]] == 1) {
         unique++;
        }

        while (unique > k) {
            if (--freq[a[left]] == 0) {
               unique --;
            }
           left ++;
        }
        count += (right - left + 1);
    }

    cout << count << endl;
    return 0;
}
