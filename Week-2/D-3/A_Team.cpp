#include <bits/stdc++.h>
using namespace std;

int create(int cnt){
int val;
    for (int i = 0; i <3; i++) 
    {
       cin>>val;
       if(val==1){
        cnt++;
       }
    }
    if(cnt>=2) return 1;
    else return 0;
}
int main() {
  int n;
  cin>>n;

int res=0;
    while (n--) {
       int cnt=0;
       res +=create(cnt);
    }
    cout<<res<<endl;
}