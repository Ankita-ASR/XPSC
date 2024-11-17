#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
       int n, m;
        cin >> m >> n;

        ll ans = 0, cnt = 0;
        vector<int> a(m),b(n);

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
          for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int>res;
        int l=0,r=0;
       while (l < m && r < n) {

            if (a[l] <= b[r]) 
            {
                res.push_back(a[l++]);
            } 
            else 
            {
                res.push_back(b[r++]);
            }
        }


        while (l < m) {
            res.push_back(a[l++]);
        }

       
        while (r < n) {
            res.push_back(b[r++]);
        }

      for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
