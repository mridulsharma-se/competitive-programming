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

        vector<vector<int>> a(n, vector<int>(m));
        int mx = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                mx = max(mx, a[i][j]);
            }
        }

        vector<int> row(n, 0), col(m, 0);
        int tot = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == mx) {
                    row[i]++;
                    col[j]++;
                    tot++;
                }
            }
        }

        bool ok = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int covered = row[i] + col[j];
                if (a[i][j] == mx) covered--;
                if (covered == tot) {
                    ok = true;
                }
            }
        }

        cout << (ok ? mx - 1 : mx) << '\n';
    }

    return 0;
}

