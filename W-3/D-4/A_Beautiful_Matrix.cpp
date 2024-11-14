#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int v[5][5];
    int r,c;
	for(int i=0;i<5;i++)
    {
       for(int j=0;j<5;j++)
       {
            cin>>v[i][j];
            if(v[i][j]==1){
              r=i;
              c=j;
            }
       }
    }
    int ans= abs(2-r)+ abs(2-c);
    cout<<ans;
}