#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string s, t;
        cin >> n >> m >> s >> t;
        
 size_t first_a_s = s.find('a');
 size_t first_a_t = t.find('a');

        if (s == t) {
            cout << "Yes\n";
            continue;
        }

        int cnt_a = count(s.begin(), s.end(), 'a');
        int cnt_b = count(s.begin(), s.end(), 'b');
        int cnt_at = count(t.begin(), t.end(), 'a');
        int cnt_bt = count(t.begin(), t.end(), 'b');

      
        if ((cnt_a == 0 && cnt_at == 0) || cnt_a != cnt_at || s[0] != t[0] || (first_a_s != first_a_t)) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
}
