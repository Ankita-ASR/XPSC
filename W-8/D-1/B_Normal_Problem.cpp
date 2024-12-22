#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s;
         for(int i=0;i<s.length();i++){
            if(s[i]=='p')p += 'q';
           else if(s[i]=='q') p+='p';
            else p+='w';
         }
     reverse(p.begin(),p.end());
     cout<<p<<endl;
    }
}