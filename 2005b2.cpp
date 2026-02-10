#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, m, q;
        cin >> n >> m >> q;

        vector<int> a(m), b(q);

        for (int i = 0; i < m; i++)
            cin >> a[i];

        for (int i = 0; i < q; i++)
            cin >> b[i];

        sort(a.begin(), a.end());

        for (int x : b) {

            int i = lower_bound(a.begin(), a.end(), x) - a.begin();

            if (i < m && a[i] == x) {
                cout << 0 << endl;
            }
            else if (i == m) {
                cout << n - a[m-1] << endl;
            }
            else if (i == 0) {
                cout << a[0] - 1 << endl;
            }
            else {
                cout << (a[i] - a[i-1]) / 2 << endl;
            }
        }
    }
}