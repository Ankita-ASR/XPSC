#include <bits/stdc++.h>
using namespace std;
int main(){
 int a,b,t,T,biscuit=0;
cin >> a>>b>>t;
 t=t+0.5;
 int i=1;
 T=a;
 if(a>t)
 {
    cout<<"0";
 }
else
{
while(t>=T){
biscuit+=b;
i++;
T= a*i;
}
cout<<biscuit;
}

}