#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAX 100000  

 int  div (long long num) {
    int d   = 0;
    for (int i = 1; i <= sqrt(num); i++) 
{
   if (num% i== 0) {
   if (num/i==i) d ++;  
   else  d+= 2;   
   }
}
 return d;
}
int main() {
long long n,x;
  cin >> n>>x;
vector<long long> v(n),b(n);
vector<long long> d(MAX+1,0);
 for (int i = 0; i < n; i++) {
     cin >> v[i];
 }
map<long long , long long> MAP;
MAP[1]= 1;
 for (int i = 2; i<=100; i++) {
 MAP[i] =(MAP[i-1] *i) % MOD;
 }
 for (int i=1;i<= MAX; i++) {
 for (int j=i; j<= MAX; j+=i) d[j]++;
}

for (int i = 0; i < n; i++) {
   b[i]= (v[i]*MAP[x])%MOD ;
 }
for (int i = 0; i < n; i++) 
{
  if (b[i] <= MAX)  cout << d[b[i]] % MOD << " ";
 else  cout << div(b[i]) % MOD << " ";
}
cout<<endl;
}


