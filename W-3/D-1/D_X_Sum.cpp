#include <bits/stdc++.h>
using namespace std;
int dx[] = {1, 1, -1, -1};
int dy[] = {1, -1, 1, -1};

int n, m;
vector<vector<int>> a;

long long Sum(int x, int y) {
long long sum = a[x][y];  

    for (int dir = 0; dir < 4; dir++) {
        int newX = x + dx[dir];
        int newY = y + dy[dir];

        
        while (newX >= 0 && newX < n && newY >= 0 && newY < m) {
            sum += a[newX][newY];
            newX += dx[dir];
            newY += dy[dir];
        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        a.assign(n, vector<int>(m));  
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        long long maxSum = 0;
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                maxSum = max(maxSum, Sum(i, j));
            }
        }
        
        cout << maxSum << '\n';
    }

}
