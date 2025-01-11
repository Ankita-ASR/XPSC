#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x;
 cin >> x;
 while (x--) {
long long N, K;
  long long X;
  cin >> N >> K >> X;    
 if (K == 1) {
      cout << "Yes\n";
  } else {
    if (X >= pow(2,K-1)) {
  cout << "Yes\n";
  } 
  else {  cout << "No\n";
            }
        }
    }
}
