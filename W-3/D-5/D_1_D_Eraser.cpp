#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'B') {
			res++; i += k - 1;
		}
	}
	cout << res << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
     /*   int n, k, op=0,cnt=0,fb,lb;
        cin >> n >> k ;

        string s;
        cin>>s;
        int cntb=count(s.begin(),s.end(),'B');
 

     if(cntb==n) cout<< n/k << endl;
     else if(cntb==0) cout<< 0 << endl;

     else
     {
        bool f=false;
        for (int i = 0; i < n; i++) {
         if( s[i]=='B' && !f){
            fb=i;
            f=true;
         }
         else if(s[i]=='B'){
            lb=i;
         }
     }
int dis=lb-fb+1;
if(dis%k==0) cout<< (dis)/k<<endl;
else  cout<< (dis/k)+1<<endl;
}*/
solve();
   }
}
