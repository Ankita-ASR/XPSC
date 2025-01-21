#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int A, B;
        cin >> A >> B;

        // Reverse the scores mathematically
        int reversed_A = (A % 10) * 10 + (A / 10);
        int reversed_B = (B % 10) * 10 + (B / 10);

        // Check all possible comparisons
        if (A > B || A > reversed_B || reversed_A > B || reversed_A > reversed_B) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
