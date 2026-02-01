#include <bits/stdc++.h>
using namespace std;

long long cnt(long long l, long long r, long long k) {
    return (r / k) - ((l - 1) / k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long total = r - l + 1;

        long long c2 = cnt(l, r, 2);
        long long c3 = cnt(l, r, 3);
        long long c5 = cnt(l, r, 5);
        long long c7 = cnt(l, r, 7);

        long long c6  = cnt(l, r, 6);
        long long c10 = cnt(l, r, 10);
        long long c14 = cnt(l, r, 14);
        long long c15 = cnt(l, r, 15);
        long long c21 = cnt(l, r, 21);
        long long c35 = cnt(l, r, 35);

        long long c30  = cnt(l, r, 30);
        long long c42  = cnt(l, r, 42);
        long long c70  = cnt(l, r, 70);
        long long c105 = cnt(l, r, 105);

        long long c210 = cnt(l, r, 210);

        long long bad =
              c2 + c3 + c5 + c7
            - (c6 + c10 + c14 + c15 + c21 + c35)
            + (c30 + c42 + c70 + c105)
            - c210;

        cout << total - bad << "\n";
    }

    return 0;
}