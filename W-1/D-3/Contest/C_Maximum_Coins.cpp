#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 int t;
    cin >> t;
    while (t--) {  
   int x,n;
   cin >> n>>x;
   int sum=0,s1=0,s2=0;
   if(x==n){
    for(int i=1;i<=x;i++){
       sum+= pow(2,i);
    }
    cout<< sum<<endl;
}
else {
for(int i=1;i<=(n-x) ; i++){
    s2+= pow(2,i);
}
for (int i = n-x+1 ; i <= n; i++)
  s1+=  pow(2,i);

cout<< s1-s2 <<endl;
}
}
return 0;
}