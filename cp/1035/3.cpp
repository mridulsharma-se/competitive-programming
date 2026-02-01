#include <bits/stdc++.h>
using namespace std;
using Z = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    while (a--) {
        Z b, c, d, e;
        cin >> b >> c >> d >> e;

        if (b == 1) {
            cout << c << '\n';
            continue;
        }

        if (b % 2 == 1) {
            cout << (e <= b ? c : -1) << '\n';
            continue;
        }

        if (b == 2) {
            cout << -1 << '\n';
            continue;
        }

        Z f = c;
        while (true) {
            bool g = true;
            for (int h = 0; h < 64; ++h) {
                Z i = 1ULL << h;
                if ((c & i) && (f & i)) {
                    f += i;
                    f &= ~(i - 1);
                    g = false;
                    break;
                }
            }
            if (g) break;
        }

        if (f > d) {
            cout << -1 << '\n';
        } else {
            cout << (e <= b - 2 ? c : f) << '\n';
        }
    }

    return 0;
}