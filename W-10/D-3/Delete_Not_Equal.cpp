#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        string s;
        cin>>n>>s;
       int z= count(s.begin(),s.end(),'0');
       int o= count(s.begin(),s.end(),'1');
if(z==0 ||o==0)cout<<n<<'\n';
else if(o==z) cout << "1" << '\n'; 
else  cout << "1" << '\n';
  }

}
