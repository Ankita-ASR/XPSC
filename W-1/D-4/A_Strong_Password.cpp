#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        bool f = false;
        int n = str.size();
        string result;

        for (int i = 0; i < n - 1; i++) {
     result.push_back(str[i]);
      if (str[i] == str[i + 1] && !f) {
       if (str[i] != 'z')
       result.push_back(char(str[i] + 1));
    else
      result.push_back('a');
     f = true;
        }
   }
 if (f) {
   result.push_back(str[n - 1]);
   } else if (!f && str[n - 1] != 'z') {
   result.push_back(str[n - 1]);
  result.push_back(char(str[n - 1] + 1));
  } 
  else if (!f) {
 result.push_back(str[n - 1]);
 result.push_back('a');
 } 
 cout << result << endl;
}
}
