#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int A ;
        cin >> A ;
    if(A%4==0) cout<<A/4<<endl;
    else if(A<4) cout<<1<<endl;
    else {
cout << A/4 + (A-(A/4)*4)/2 <<  endl;
    }
       
    }
    
}
