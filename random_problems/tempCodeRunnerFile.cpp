#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll w, b;
        cin >> w >> b;

        ll total = w + b;
        ll k = (ll)((sqrt(1 + 8.0 * total) - 1) / 2);

        cout << k << "\n";
    }
    return 0;
}