#include <bits/stdc++.h>
using namespace std;
int main(){
 int a,b;
cin >> a>>b;
if(a==b) cout<<2*a;
else if(b>a) cout<< 2*b -1;
else if(a>b) cout<< 2*a -1;
return 0;
}