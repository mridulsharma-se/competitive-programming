#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    ll x;
    cin >> n >> x;

    ll f = 0;       
    ll g = -1e18;  

    for (int i = 0; i < n; i++) {
        ll a, b, c;
        cin >> a >> b >> c;

        f += (b - 1) * a;
        ll v = a * b - c;
        g = max(g, v);
    }

    if (f >= x) {
        cout << 0 << "\n";
        return;
    }

    if (g <= 0) {
        cout << -1 << "\n";
        return;
    }

    ll d = x - f;
    ll ans = (d + g - 1) / g;

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}