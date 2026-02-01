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

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        unordered_map<int, bool> hasAdj;
        unordered_set<int> seen;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x = a[i][j];
                seen.insert(x);

                if (i + 1 < n && a[i+1][j] == x) hasAdj[x] = true;
                if (j + 1 < m && a[i][j+1] == x) hasAdj[x] = true;
            }
        }

        int total = 0;
        int best = 0;

        for (int x : seen) {
            int cost = hasAdj[x] ? 2 : 1;
            total += cost;
            best = max(best, cost);
        }

        cout << total - best << "\n";
    }

    return 0;
}