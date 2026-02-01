#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x, k;
        cin >> x >> k;

        if (x % k != 0) {
            cout << 1 << endl;
            cout << x << endl;
        } else {
            for (int i = 1; i < x; i++) {
                if (i % k != 0 && (x - i) % k != 0) {
                    cout << 2 << endl;
                    cout << i << " " << x - i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}