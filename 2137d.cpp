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

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        } 

        vector<vector<int>> f(n + 1);
        for (int i = 0; i < n; i++) {
            f[b[i]].push_back(i);
        }

        vector<int> a(n, 0);
        int x = 1;
        bool ok = true;

        for (int k = 1; k <= n; k++) {
            if (f[k].size() % k != 0) {
                cout << -1 << '\n';
                ok = false;
                break;
            }

            for (int i = 0; i < (int)f[k].size(); i += k) {
                for (int j = 0; j < k; j++) {
                    a[f[k][i + j]] = x;
                }
                x++;
            }
        }

        if (ok) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}