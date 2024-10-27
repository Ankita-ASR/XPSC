#include <bits/stdc++.h>
using namespace std;
int main(){
 string s;
cin >> s;
sort(s.begin(),s.end());
set<char>ss;
bool f=false;
for(auto ch :s){
ss.insert(ch);
}
for(char i='a';i<='z';i++){

if(ss.count(i)==0){
    cout<< i;
    f=true;
    break;
}
}
if(!f)  cout<<"None";
}
