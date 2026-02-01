#include <bits/stdc++.h>
using namespace std;

void f() {
    int a;
    cin >> a;
    while (a--) {
        long long b, c, d, e;
        cin >> b >> c >> d >> e;

        if (b == c) {
            cout << 0;
        } else if (b > c) {
            if ((b & 1) && (c == b - 1)) {
                cout << e;
            } else {
                cout << -1;
            }
        } else {
            long long s = 0;
            for (long long t = b; t < c; ++t) {
                s += (t & 1 ? d : min(d, e));
            }
            cout << s;
        }

        if (a) cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    f();
    return 0;
}