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

        vector<int> row1(n), row2(n);
        for (int i = 0; i < n; i++) cin >> row1[i];
        for (int i = 0; i < n; i++) cin >> row2[i];

        long long summ = 0;
        long long best = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            summ += max(row1[i], row2[i]);
            best = max(best, (long long)min(row1[i], row2[i]));
        }

        cout << summ + best << "\n";
    }

    return 0;
}