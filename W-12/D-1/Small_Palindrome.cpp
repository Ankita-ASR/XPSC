#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int  a, b;
        cin >>a >>b;

        for (int i = 0; i <a/2; i++) {
            cout << "1";
        }

        for (int i = 0; i<b; i++) {
            cout << "2";
        }

        for (int i = 0; i<a/2;i++) {
            cout << "1";
        }
        cout << endl;
    }
}
