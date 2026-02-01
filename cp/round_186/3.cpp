#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        
        if (n == 1) {
            if (a[0] < b[0] && b[0] < c[0])
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
            continue;
        }

        long long x = 0, y = 0;

        
        for (int s = 0; s < n; s++) {
            bool ok = true;
            for (int p = 0; p < n; p++) {
                if (a[p] >= b[(p + s) % n]) {
                    ok = false;
                    break;
                }
            }
            if (ok) x++;
        }

        
        for (int t = 0; t < n; t++) {
            bool ok = true;
            for (int p = 0; p < n; p++) {
                if (b[p] >= c[(p + t) % n]) {
                    ok = false;
                    break;
                }
            }
            if (ok) y++;
        }

        long long ans = 1LL * n * x * y;
        cout << ans << "\n";
    }

    return 0;
}