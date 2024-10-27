#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
cin >> n;
string s= to_string(n);
int size=s.length();
if(size==4){
    cout<<n;
}
else if(size==3){
    cout<<"0"<<n;
}
else if(size==2){
    cout<<"00"<<n;
}
else if(size==1){
    cout<<"000"<<n;
}
}