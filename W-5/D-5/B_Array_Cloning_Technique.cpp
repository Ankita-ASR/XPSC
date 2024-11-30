#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
	int n;
	cin >> n;
	vector<int> v(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mp[v[i]]++;
	}
	int f = 0;
	for (auto it: mp) {
		f = max(f, it.second);
	}
 
	int res = 0;
	while (f < n) {
		res++;
		if( (n - f) >= f){
			res += f;
			f*= 2;
		} else {
			res += n-f;
            break;
		}
	}
	cout << res << '\n';
   }
return 0;
}