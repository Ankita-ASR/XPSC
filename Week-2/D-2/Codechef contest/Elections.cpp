#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,x;
    cin>>n>>x;
    
    int aw=0, bw=0 ,eq=0;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>aTw;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]<a[i])
        aw++;
      
         else
        {
            aTw.push_back(b[i]-a[i]+1);
        }
       
    }
    
   
    int cnt=0;
    
    if(aw> n/2) cout<<"YES"<<endl;
    
    else 
    { 
      sort(aTw.begin(),aTw.end());
     
    for( auto ne : aTw){
      
       if(x>= ne ){
            x-=ne;
            cnt++;
        }
    }
      if(cnt+aw > n/2 )  cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    }
}