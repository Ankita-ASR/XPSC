#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, count = 0, ans = 0;
    string s;
    cin >> n >> s;
    for(char ch : s)
    {
        if(ch == '.')
            count ++;
        else
        {
            if(count < 3)
                ans += count;
            else if(count == 3)
            {
                cout << 2 << endl;
                return;
            }
            count = 0;
        }
        if(count == 3)
        {
            cout << 2 << endl;
            return;
        }
        
    }
    if(count < 3)
        ans += count;
    else if(count >= 3)
    {
        cout << 2 << endl;
        return;
    }
            
    cout << ans << endl;
}
 
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
 
}