#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {  
         int n; 
        cin >> n;
       string s;
       cin>>s;
       int cntB=0,cntW=0;
       int firstb=-1;
       int lastb=-1;
       for(int i=0;i<n;i++)
       {
       if(s[i]=='W'){
            cntW++;
        }
        else cntB++;
        if(firstb==-1 && s[i]=='B'){
         firstb=i;
        }
        else if  (s[i]=='B'){
        lastb=i;
        }
       }
       if(cntB==1){
        cout<<"1"<<'\n';
       }
     else if (cntB > 1) {
            cout << lastb - firstb + 1 << '\n';
        } else {
            cout << "0" << '\n';
        }
    }
}