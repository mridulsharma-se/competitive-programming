#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353;

long long pw(long long a, long long b) {
    long long r = 1;
    while (b) {
        if (b & 1) r = r * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
    vector<long long> fact(55, 1);
    for (int i = 1; i <= 50; i++)
        fact[i] = fact[i - 1] * i % MOD;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        long long S = 0;
        for (int i = 0; i <= n; i++) {
            cin >> a[i];
            S += a[i];
        }

        long long q = S / n;
        long long r = S % n;

        long long k = 0;
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (a[i] > q + 1) ok = false;
            if (a[i] == q + 1) k++;
        }

        if (!ok || k > r) {
            cout << 0 << "\n";
            continue;
        }

        long long ans = fact[r] * pw(fact[r - k], MOD - 2) % MOD;
        ans = ans * fact[n - k] % MOD;

        cout << ans << "\n";
    }
}