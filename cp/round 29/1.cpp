#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        if (x == y || y == 1 || x==y+1) {
            cout << -1 << "\n";
        }
        else if (x<y) {
            cout << 2 << "\n";
        }
        else {
            cout << 3 << "\n";
        }
    }
    return 0;
}