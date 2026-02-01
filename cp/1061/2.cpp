#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<long long> a(q);
        for (int i = 0; i < q; i++) cin >> a[i];

        bool allA = true;
        for (char c : s) if (c != 'A') allA = false;

        for (int i = 0; i < q; i++) {
            long long x = a[i];
            if (allA) {
                cout << x << "\n";
                continue;
            }
            long long y = 0;
            int pos = 0;
            while (x > 0) {
                if (s[pos] == 'A') x--;
                else x /= 2;
                y++;
                pos = (pos + 1) % n;
            }
            cout << y << "\n";
        }
    }
}