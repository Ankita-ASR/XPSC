#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
       
        sort(A.begin(), A.end());
        
        int minRange = min({
            A[N - 3] - A[0],    //two large  remove
            A[N - 2] - A[1],     // large and small 
            A[N - 1] - A[2]     // two small
        });
        
        cout << minRange << "\n";
    }
    
    return 0;
}
