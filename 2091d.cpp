#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;

        long long r = k / n;
        if (k % n != 0) r++;

        long long s = m - r +1;

        long long a = r / s;
        if (r % s != 0) a++;

        cout << a << "\n";
    }

    return 0;
}