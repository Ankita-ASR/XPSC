#include <bits/stdc++.h>
using namespace std;
 int oddCount;
bool Palindrome(string s) {
    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }
   oddCount = 0;
    for (auto entry : freq) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}

int main() {
    int t; 
    cin>>t;
    while(t--){
    int len ,op;
    cin>>len>>op;

    string s;
    cin >> s;

    if (Palindrome(s)) {
        cout << "YES" << endl;
    } 
else {
if(oddCount<=op|| op+1>=oddCount) cout << "YES" << endl;
else 
{
  cout << "NO" << endl;
}
 }
 }
}
