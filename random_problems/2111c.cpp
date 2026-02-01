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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = LLONG_MAX;
        int i = 0;

        while (i < n) {
            int j = i;
            while (j < n && a[j] == a[i]) {
                j++;
            }

            ans = min(ans, (long long)(i + n - j) * a[i]);

            i = j;
        }

        cout << ans << "\n";
    }

    return 0;
}