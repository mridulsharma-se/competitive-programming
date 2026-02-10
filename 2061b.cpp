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

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int c = -1;  

        for (int i = n - 1; i > 0; i--) {
            if (a[i] == a[i - 1]) {
                c = a[i];
                break;
            }
        }

        if (c == -1) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> b;
        int k = 2;
        for (int i = 0; i < n; i++) {
            if (a[i] == c && k > 0) {
                k--;
            } else {
                b.push_back(a[i]);
            }
        }

        bool f = false;
        int p = 0;

        for (int i = 0; i + 1 < (int)b.size(); i++) {
            if (b[i + 1] - b[i] < 2 * c) {
                f = true;
                p = i;
                break;
            }
        }

        if (f) {
            cout << c << " " << c << " "
                 << b[p] << " " << b[p + 1] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}