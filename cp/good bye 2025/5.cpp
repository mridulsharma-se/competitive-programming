#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll query(int l, int r) {
    if (l > r) return 0;
    cout << "? " << l << " " << r << endl;
    cout.flush();
    ll x;
    cin >> x;
    if (x == -1) exit(0);
    return x;
}

ll solve(int l, int r) {
    if (l == r) {
        return query(l, l);
    }

    ll total = query(l, r);
    ll target = total / 2;

    ll cur = 0;
    int split = l - 1;

    // SAFE linear scan (guaranteed split exists)
    for (int i = l; i <= r; i++) {
        cur += query(i, i);
        if (cur == target) {
            split = i;
            break;
        }
    }

    // lengths
    int lenL = split - l + 1;
    int lenR = r - split;

    // recurse into shorter side
    if (lenL < lenR) {
        return solve(l, split);
    } else {
        return solve(split + 1, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        ll ans = solve(1, n);

        cout << "! " << ans << endl;
        cout.flush();
    }
    return 0;
}