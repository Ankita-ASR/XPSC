#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        unordered_map<int, int> last_index; 
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            int temp;
            cin >> temp;
            last_index[temp] = i; 
        }
        int max_sum = -1;
        for (auto it1 = last_index.begin(); it1 != last_index.end(); ++it1) {
            for (auto it2 = it1; it2 != last_index.end(); ++it2) {
                int a = it1->first, b = it2->first;
                if (__gcd(a, b) == 1) {  
                    int sum = it1->second + it2->second;
                    if (a != b) sum = it1->second + it2->second;
                    max_sum = max(max_sum, sum);
                }
            }
        }
        cout << max_sum << endl;
    }
  
}
