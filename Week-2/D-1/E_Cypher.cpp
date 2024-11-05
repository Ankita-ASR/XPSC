#include <bits/stdc++.h>
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
        for (int i = 0; i < n; ++i) 
        {
            cin >> v[i];
        }
  vector<int>result(n);
  for(int i=0;i<n;i++){
  int x,digit;
  cin>>x;
 string step;
 cin>>step;
digit=v[i];
for(int i=0;i<step.length();i++){
if(step[i]=='U'){
  digit= digit-1;
  if(digit== -1){
     digit= 9;
     }
   }
  else{
  digit =digit+1;
  if(digit== 10){
     digit= 0;
     }
 }
  }
  result[i]= digit;
 }
  for (int d : result) {
            cout << d << " ";
        }
        cout << "\n";
    }
}
