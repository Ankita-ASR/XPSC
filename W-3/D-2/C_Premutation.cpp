#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
    vector<vector<int>> sequences(n, vector<int>(n - 1));
    unordered_map<int, int> firstElementCount;

  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> sequences[i][j];
        }
        firstElementCount[sequences[i][0]]++; 
    }

    
    int firstElement = -1;
    for (auto& entry : firstElementCount) {
        if (entry.second == n - 1) {
            firstElement = entry.first;
            break;
        }
    }

   
    vector<int> permutation;
    permutation.push_back(firstElement); 
    for (int i = 0; i < n; i++) {
        if (sequences[i][0] != firstElement) {
            
            for (int j = 0; j < n - 1; j++) {
                permutation.push_back(sequences[i][j]);
            }
            break;
        }
    }

    for (int num : permutation) {
        cout << num << ' ';
    }
    cout << endl;
}
}
