#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 int t;
 cin>> t;
      while(t--){
      int x,n,y;
      long long psum=0,msum=0,sum=0,s=0;
        cin >>n;
        vector<int>v(n),m,p;

       for(int i=0;i<n;i++){
        cin>>v[i];
       sum+=v[i];
        if(v[i]<0)
  {
    m.push_back(v[i]);
  }
  else{
    p.push_back(v[i]);
     psum+=v[i];
  }
}
if(m.size()==0) cout<<psum<<endl;

else if (m.size()>=2)
{
sort(m.begin(),m.end(),greater<int>());
m[0]=m[0]*(-1);
m[1]=m[1]*(-1);
for(int i=0;i<m.size();i++){
msum+= m[i];
}
cout<< msum+psum <<endl;
}
else 
{
sort(v.begin(),v.end());
v[0]*= -1;
v[1]*= -1;
for(int i=0;i<v.size();i++){
s+= v[i];
}
cout<< max(s ,sum )<<endl;
}

}
}
