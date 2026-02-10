#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int m = k - 1;

        vector<long long> l(n), r(n);
        for (int i = 0; i < n; i++) cin >> l[i];
        for (int i = 0; i < n; i++) cin >> r[i];

        vector<long long> a(n), b(n);
        long long y = 0;

        for (int i = 0; i < n; i++) {
            a[i] = max(l[i], r[i]);
            b[i] = min(l[i], r[i]);
            y += a[i];
        }

        sort(b.begin(), b.end(), greater<long long>());

        for (int i = 0; i < m; i++) {
            y += b[i];
        }

        cout << y + 1 << '\n';
    }

    return 0;
}