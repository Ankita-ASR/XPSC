#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
    cout<<2<<endl;
    int x=n,y=n-1;
    for(int i=1;i<n;i++)
    {
        cout<< x <<" "<< y <<endl;
        if((x+y)%2==0) x=(x+y)/2;
        else x= (x+y)/2 +1;
        y--;
    }   
  }
}