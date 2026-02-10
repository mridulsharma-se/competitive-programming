#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m; 

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long b;
        cin >> b;

        long long prev = LLONG_MIN;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            long long x = a[i];
            long long y = b - a[i];
            if (x > y) swap(x, y);

            if (x >= prev) {
                prev = x;
            } else if (y >= prev) {
                prev = y;
            } else {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}