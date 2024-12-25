#include <bits/stdc++.h>
 using namespace std;

int main() {
    int t;
    cin >> t;
while (t--) {
int n,x;
  cin >> n;
map<int, int> MAP;
 for (int i = 1; i <= n; i++) {
     cin >> x;
 MAP[x] = max(i, MAP[x]);
      }
 int SUM=0;  
 for (auto p:MAP) {
  SUM += p.second;
  }
  cout << SUM << "\n";
   }
}


