#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int n,c,sum=0;
        cin>>n;
    
       for(int i=0;i<n;i++) {
            cin >> c;
            if(c%2==0){
               sum+=c/2;
            } 
            else {
                sum+=c/2 +1;
                }
        }
        cout<<sum<<endl;
        
     
    }
}