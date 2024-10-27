#include <bits/stdc++.h>
using namespace std;
int main(){
 int n,s=0,d=0;
cin >>n;
vector<int>v(n);
for (int i=0;i<n;i++)
{
cin>>v[i];
}
 int i = 0, j = n - 1;
while (i <= j) {
    if (i != j) {
    if(v[i]>v[j])
    {
    s+=v[i]; 
    i++; 
    }
    else{
    s+=v[j];
    j--;}

 if(v[i]>v[j])
    {
    d+=v[i]; 
    i++; 
    }
    else{
    d+=v[j];
    j--;}

    }
    else {      
 s+=v[i]; 
break;
    }
  
}
 cout<<s<<" "<<d;
}