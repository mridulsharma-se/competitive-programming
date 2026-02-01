#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;

        long long c, d, e, f;
        cin >> c >> d >> e >> f;

        vector<long long> g(b);
        long long h = 0;
        for (int i = 0; i < b; ++i) {
            cin >> g[i];
            h += g[i];
        }

        long long i = c - e;
        long long j = d - f;
        long long k = i * i + j * j;

        long long l = 0;
        for (int m = 0; m < b; ++m) {
            long long n = h - g[m];
            if (g[m] > n) {
                long long o = g[m] - n;
                l = max(l, o * o);
            }
        }

        long long p = h * h;

        if (k >= l && k <= p) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}