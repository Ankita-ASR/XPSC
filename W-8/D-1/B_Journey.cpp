#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,a,b,c,s;
   cin>>n>>a>>b>>c;
   s=a+b+c;
if(a==1 && b==1 &&c==1) cout<<n<<endl;
else if(a>=n)cout<<1<<endl;
else if(a+b >=n) cout<< 2 <<endl;
else if((a+b+c)>=n)  cout<< 3 <<endl;
else 
{
int day =n/s;
int rem=  n- day*s;
if(rem==0) cout<< day*3 <<endl;
else{
if((day*s +a)>=n)cout<< day*3 + 1 <<endl;
else if(day*s +a+b >=n) cout<< day*3 +2 <<endl;
else if(day*s +a+b+c >=n) cout<< day*3 +3 <<endl;
}
}
}
}