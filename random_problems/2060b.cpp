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

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int p = 0;
        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) p = i;
        }

        if (p == 0) {
            cout << "YES\n";
            continue;
        }

        for (int i = 0; i < p; i++) {
            long long x = min(a[i], a[i + 1]);
            a[i] -= x;
            a[i + 1] -= x;
        }

        if (is_sorted(a.begin(), a.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}