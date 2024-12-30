#include<bits/stdc++.h>
using namespace std ;
int main() {
    int t;
    cin >>t;
 while (t--) {
    int n,v;
     cin >> n;
int z = 0, o=0;
for (int i = 0;i <n; i++) {
cin >> v;
if (v == 0)z++;
else o++;
}
 cout << min(z,o) <<'\n';
 }
}
