 
    
#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;  
    cin >> T;

    while (T--) {
        int N;  
        cin >> N;
        string S; 
        cin >> S;
    int cntz=0,cnto=0;
 bool f1=false,f2=false;
 for(int i=0;i<N;i++){
     if(S[i]=='1' && !f1)
     {
         f1= true;
         f2=false;
         cnto++;
     }
     else if(S[i]=='0' && !f2) {
         f2= true;
         f1=false;
         cntz++;
     }
 }
 cout<< min(cntz,cnto) <<endl;
}
}
 