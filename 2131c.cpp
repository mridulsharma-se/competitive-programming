#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> s(n), t2(n);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
            long long r = s[i] % k;
            s[i] = min(r, (k - r) % k);
        }

        for (int i = 0; i < n; i++) {
            cin >> t2[i];
            long long r = t2[i] % k;
            t2[i] = min(r, (k - r) % k);
        }

        sort(s.begin(), s.end());
        sort(t2.begin(), t2.end());

        if (s == t2) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}