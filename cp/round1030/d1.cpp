#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> p(n);
        vector<int> d(n);

        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> d[i];

        int q;
        cin >> q;

        while (q--) {
            ll x;
            cin >> x;

            int dir = 1;
            ll tm = 0;
            set<pair<int, int>> vis;

            int ii = int(lower_bound(p.begin(), p.end(), x) - p.begin());
            if (ii < n && p[ii] == x && tm % k == d[ii]) {
                dir = -dir;
                vis.insert({ii, dir});
            }

            bool ok = false;

            while (true) {
                int j;
                if (dir == 1) {
                    j = int(upper_bound(p.begin(), p.end(), x) - p.begin());
                    if (j >= n) {
                        ok = true;
                        break;
                    }
                } else {
                    j = int(lower_bound(p.begin(), p.end(), x) - p.begin()) - 1;
                    if (j < 0) {
                        ok = true;
                        break;
                    }
                }

                tm += llabs(p[j] - x);
                x = p[j];

                if (tm % k == d[j]) {
                    dir = -dir;
                    if (!vis.insert({j, dir}).second)
                        break;
                }
            }

            cout << (ok ? "YES\n" : "NO\n");
        }
    }

    return 0;
}