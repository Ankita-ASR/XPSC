#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--)
 {
int n;
string s,p;
cin>>n>>s>>p;
for(int i=0;i<n;i++)
{
  if (s[i] == 'G')
  {
    s[i]='B';
  }
  if (p[i]== 'G')
  {
     p[i]='B';
  }
}

if(s==p) cout<< "YES"<<'\n';
else cout<<"NO"<<'\n';
}
}