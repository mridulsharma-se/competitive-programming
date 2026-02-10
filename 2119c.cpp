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

        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        vector<long long> v(n);
        long long s = 0, m = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s += v[i];
            m = max(m, v[i]);
        }

        long long x = a - c;
        long long y = b - d;
        long double dist = sqrt((long double)x * x + (long double)y * y);

        long long hi = s;
        long long lo = max(0LL, m - (s - m));

        if (lo <= dist && dist <= hi)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}