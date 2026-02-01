#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a = 0, b = 0; 

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) a++;
            if (x == 1) b++;
        }

        if (a == 0) {
            cout << "NO\n";
        } else if (a >= 2 && b == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}