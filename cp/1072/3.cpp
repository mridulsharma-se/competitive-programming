#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int a, b;
    cin >> a >> b;

    if (b > a) {
        cout << -1 << endl;
        return;
    }

    int cur = 1;
    for (int i = 0; i <= 60; i++) {
        int low = a / cur;
        int high = (a + cur - 1) / cur;

        if (low <= b && b <= high) {
            cout << i << endl;
            return;
        }

        if (low == 0) break;
        cur <<= 1;
    }

    cout << -1 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}