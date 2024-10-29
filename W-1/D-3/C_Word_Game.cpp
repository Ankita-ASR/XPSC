#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; // Number of words
        cin >> n;
  
        
        vector<vector<string>> v(3);
        unordered_map<string, int> frequency_map;
        
        string word;
        for (int k = 0; k < 3; k++) {
            for (int i = 0; i < n; ++i) {
                cin >> word;
                v[k].push_back(word);
                frequency_map[word]++;
            }
        }
        
        int sum1 = 0, sum2 = 0, sum3 = 0;
        
        for (auto  c : v[0]) {
            if (frequency_map[c] == 1) {
                sum1 += 3;
            }
            else if (frequency_map[c] == 2) {
                sum1 += 1;
            }
        }

        for (auto  c : v[1]) {
            if (frequency_map[c] == 1) {
                sum2 += 3;
            }
            else if (frequency_map[c] == 2) {
                sum2 += 1;
            }
        }

        for (auto c : v[2]) {
            if (frequency_map[c] == 1) {
                sum3 += 3;
            }
            else if (frequency_map[c] == 2) {
                sum3 += 1;
            }
        }

        cout << sum1 << " " << sum2 << " " << sum3 << '\n';
    }
    return 0;
}

