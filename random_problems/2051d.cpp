#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long s = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }

        long long ans = 0;
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            long long l = s - y - a[i];
            long long r = s - x - a[i];

            int st = lower_bound(a.begin(), a.end(), l) - a.begin();
            int end = upper_bound(a.begin(), a.end(), r) - a.begin();

            long long cnt = end - st;
            if (l <= a[i] && a[i] <= r) cnt--;

            ans += cnt;
        }

        cout << ans / 2 << "\n";
    

        // sort(a.begin(), a.end());

        // auto calcLessThanX = [&](long long X) {
        //     int j = 0;
        //     long long ans = 0;

        //     for (int i = n - 1; i >= 0; i--) {
        //         while (j < n && s - a[i] - a[j] >= X) {
        //             j++;
        //         }
        //         ans += (n - j);
        //     }


        //     for (int i = 0; i < n; i++) {
        //         if (s - a[i] - a[i] < X) {
        //             ans--;
        //         }
        //     }

        //     return ans / 2;
        // };

        // cout << calcLessThanX(y + 1) - calcLessThanX(x) << "\n";
    }

    return 0;
}