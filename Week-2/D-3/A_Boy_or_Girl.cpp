#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin>>s;

set<int>st;
   for (int i = 0; i <s.length(); i++) 
    {
    st.insert(s[i]);
    }
    if(st.size()%2 !=0) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    
}