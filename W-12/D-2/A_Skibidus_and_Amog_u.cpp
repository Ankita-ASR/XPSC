#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
      string s;
      cin>>s;
      int n= s.length()-1;
      if(s.length()==1 && s =="i") cout<<"us\n";
      else if(s.length()==2 && s =="us" ) cout<<"i\n";
else{
if(s[n]=='i'){
for(int i=0;i<n-1;i++){
    cout<<s[i];
}
cout<<"us\n";
}
if(s[n]=='s'){
for(int i=0;i<n-1;i++){
    cout<<s[i];
}
cout<<"i\n";
}
}  }
}
