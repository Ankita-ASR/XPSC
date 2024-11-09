#include<bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    int n,val;
    cin >> n;
   long long s=0;
    priority_queue<int>q;
   
    for (int i = 0; i <n; i++) {
        cin >> val;
        if(val!=0)
        q.push(val);
       else if (val==0 && !q.empty())
     {
        s += q.top();
        q.pop();
     }
    }
    cout<<s<<'\n';
   }
}
