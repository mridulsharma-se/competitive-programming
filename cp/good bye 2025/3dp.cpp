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

        // Suffix sum: suff[i] = a[i] + ... + a[n-1]
        vector<long long> suff(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            suff[i] = suff[i + 1] + a[i];
        }

        long long Prefix_Val = 0;
        long long Max_X = LLONG_MIN;

        for (int k = 0; k < n; k++) {
            // survivor at k
            Max_X = max(Max_X, Prefix_Val - suff[k + 1]);

            // update prefix for next k
            if (k == 0) {
                Prefix_Val += a[0];
            } else {
                Prefix_Val += llabs(a[k]);
            }
        }

        cout << Max_X << '\n';
    }
    return 0;
}