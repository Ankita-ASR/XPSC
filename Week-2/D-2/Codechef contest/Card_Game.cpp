#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int x,y;
    cin>>x>>y;
    if(x==2&&y==2)cout<< 0 <<endl;
    else if((y%2==0 && x%2!=0) || (y%2==0 && x%2==0)||(y%2!=0&& x%2==0))
    {
     cout<<x/2 -1<<endl;
    }
   else if(y%2!=0&& x%2!=0)
   {
       cout<<x/2<<endl;
   }
    }
}