#include <bits/stdc++.h>
using namespace std;

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

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

   
        vector<long long> s(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            s[i] = s[i + 1] + a[i];
        }

        long long p = 0;         
        long long ans = LLONG_MIN;

        for (int k = 0; k < n; k++) {
            ans = max(ans, p - s[k + 1]);

            if (k == 0) p += a[0];
            else p += llabs(a[k]);
        }

        cout << ans << '\n';
    }
    return 0;
}