#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;

        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        
        if (sum * k < x) {
            cout << 0 << "\n";
            continue;
        }

        long long used = 0;

        long long full = x / sum;
        long long rem = x % sum;

        if (rem == 0) {
            used = full * n;
        } else {
            used = full * n;
            long long cur = 0;

            
            for (int i = n - 1; i >= 0; i--) {
                cur += a[i];
                used++;
                if (cur >= rem) break;
            }
        }

        cout << 1LL * n * k - used + 1 << "\n";
    }

    return 0;
}