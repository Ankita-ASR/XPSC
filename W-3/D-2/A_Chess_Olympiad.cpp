#include <bits/stdc++.h>
using namespace std;

int main() {
 int w,d,l,rem;
cin>>w>>d>>l;
double op=0.5*d + l;
double my= 0.5*d + w;
if(l+w+d==4) {
    if(my>op)  cout<< "Yes";
    else       cout<<"No";
   
}
else{
rem= 4- (w+d+l);

if(op< my+rem ) {
   
    cout<< "Yes";
    
}
else if(op+rem*0.5 <  my+rem*0.5 ) cout<<"No";
else 
{
     cout<<"No";
}
}

}