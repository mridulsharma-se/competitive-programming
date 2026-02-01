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
        vector<int> a(m);
        for (int &i : a) cin >> i;

        bool inc = true;
        for (int i = 0; i < m - 1; i++) {
            if (a[i] >= a[i + 1]) {
                inc = false;
                break;
            }
        }

        if (!inc) {
            cout << 1 << endl;
        } else {
            int last = a.back() - 1;
            cout << n - last << endl;
        }
    }

    return 0;
}