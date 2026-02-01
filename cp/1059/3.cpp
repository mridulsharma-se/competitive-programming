#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        long long c = a;
        int d = 0;
        while ((1LL << d) <= c) d++;
        d--;

        long long e = (1LL << (d + 1)) - 1;

        if (b > e) {
            cout << -1 << "\n";
            continue;
        }

        long long f = a ^ b;

        if (f <= a) {
            cout << 1 << "\n" << f << "\n";
        } else {
            long long g = e ^ a;
            long long h = e ^ b;
            cout << 2 << "\n" << g << " " << h << "\n";
        }
    }

    return 0;
}