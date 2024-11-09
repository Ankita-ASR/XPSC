#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> cnt;
        int f = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
         f=max(f,cnt[x]);
        }
        if (f <= n / 2) {
            cout << n % 2 << endl;
        } else {
            cout << 2 * f - n << endl;
        }
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
unordered_map<int, int> freq;
freq.reserve(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        int f_max = 0;
        for (auto f : freq) {
            f_max = max(f_max, f.second);
        }
        
          
       if (f_max > n / 2) {
            cout << 2 * f_max - n << '\n';
        } 
        else {
            cout << n % 2 << '\n'; 
        }
    }
}