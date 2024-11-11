#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t;
    cin>>t;
	while(t--)
	{
	long long n;cin>>n;
	long long a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    sort(a,a+n);
	    if(n==1){
	        cout<<"YES\n";
	    }
	    else if(n==2)
	    {
	        if(a[0]==a[1] || (a[0]==0||a[1]==0)) 
            cout<<"YES\n";
	        else
            cout<<"NO\n";
	    }
	    else
	    {
	     bool f=true;
	        for(int i=0;i<n-1;i++)
	        {
	            if(a[i]==0)
	            {
	                continue;
	            }
	            else if(a[i]!=a[i+1])
	            {
	                f=false;
                    break;
	            }
	        }
	        if(!f) cout<<"NO\n";
	        else cout<<"YES\n";
	    }
	}

}