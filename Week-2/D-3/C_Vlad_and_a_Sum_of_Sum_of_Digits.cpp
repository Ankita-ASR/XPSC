#include <bits/stdc++.h>
using namespace std;
const int M = 200007;
int Sum[M];
int solve(int number) 
{
    int sum = 0;
    while (number) {
        sum += (number % 10);
        number /= 10;
    }
    return sum;
}
int main() {
    Sum[0] = 0;
    for (int i = 1; i < M; i++) 
    {
        Sum[i] = Sum[i - 1] + solve(i);
    }
    int t;
    cin >> t;
    while (t--) {
    int q;
    cin >> q;
    cout << Sum[q] << '\n';
    }
}
