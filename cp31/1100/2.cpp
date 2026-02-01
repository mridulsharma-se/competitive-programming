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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        
        int max_b = 0;
        long long ans = 0, sum = 0;

        for (int i = 0; i < min(n, k); i++) {
            sum += a[i];
            max_b = max(max_b, b[i]);
            
            ans = max(ans, sum + 1LL * (k - i - 1) * max_b);
        }

        cout << ans << "\n";
    }

    return 0;
}