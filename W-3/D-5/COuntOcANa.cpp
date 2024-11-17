//https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..
//gfg
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    vector<int> p(256,0);
        vector<int> s(256,0);
        int n = txt.size();
        int m = pat.size();
        int ps=0,ss=0;
        int val;
        for (int i = 0; i < m; i++)
            {
                p[pat[i]]++;
                s[txt[i]]++;
            }
        int c = 0;
        if(p ==s){
            c++;
        }
        int i =0, j = m;
        while(j<n){
            s[txt[j]]++;
            s[txt[i]]--;
            if(p==s){
                c++;
            }
            i++;
            j++;
        }
        return c;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}