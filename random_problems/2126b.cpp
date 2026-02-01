#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        long long cur = h[k - 1];   
        long long dist = h[k - 1];  

        sort(h.begin(), h.end());

        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (h[i] < cur) continue;

            if (h[i] - cur > dist) {
                ok = false;
                break;
            }

            cur = h[i];
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}