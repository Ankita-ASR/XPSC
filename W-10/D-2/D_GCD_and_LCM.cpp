/*#include<bits/stdc++.h>
using namespace std;
long long  solve( long long x, long long y, long long k){
    long long sum=0;
   
 while(k--){  
       long long g= __gcd(x,y);
       if(x>y) x=g;
       else y=g;

    long long l= (x/g)*y;
    if(x>y) x=l;
    else y=l;

    if (x == y) {
        sum+=2*x ;
        return sum;
        break;
        } 
        else if(x==1 ||y==1)
        { 
            sum+=2 ;
            return sum;
            break;
        }
}
//return x+y;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
         long long ans=0;
        long long X, Y, K;
        cin >> X >> Y >> K;
        
       if (X == Y) {
           cout << 2*X << endl;
        } 
        else if(X==1 ||Y==1 )
        {
            cout << 2 << endl;
        }
        //divisible but op1 then 2*min 
        //divisible but op>2 then 2
        else if(K%2!=0 ){
    if(K==3){
    ans= solve(X,Y,2);
       long long g= __gcd(X,Y);
       if(X>Y) X=g;
       else Y=g;
 }
}
else {
 ans= solve(X, Y, K);
   cout<<ans<<endl;
 }
        }
    }*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b) {
    return __gcd(a, b);
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
   int x, y, k;
   cin >> x >> y >> k;
   for (int i = 0; i < k; i++) {
    if (x == y) {
        break;
    }
    int mn = gcd(x, y);
    if (x > y) {
        x = mn;
    } else {
        y = mn;
    }
    int mx = lcm(x, y);
    if (x > y) {
        x = mx;
    } else {
        y = mx;
    }
   }
   cout << x + y << '\n';
   }
}