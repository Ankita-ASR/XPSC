#include <bits/stdc++.h>
using namespace std;
int step, rem;
int solve(int n) {
    if (n % 5 == 0)
        step += n / 5;
    else
    {
     //5 diye vag korle reminder 5 erche kom e hobe
     step += n / 5 + 1;
    }
    return step;
}

int main() {
    int n;
    cin >> n;
    step = 0;
    if (n <= 5)
        cout << "1";
    else
        cout << solve(n);
}
