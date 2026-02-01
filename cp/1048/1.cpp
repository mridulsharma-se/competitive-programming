#include <bits/stdc++.h>
using namespace std;

int mygcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
        } 
        else if (mygcd(a, b) == min(a, b)) {
            cout << 1 << "\n";
        } 
        else {
            cout << 2 << "\n";
        }
    }

    return 0;
}