#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t; 

    while (t--) {
        int n;
        long long k, b, s;
        cin >> n >> k >> b >> s;

        long long minSum = b * k;
        long long maxSum = b * k + 1LL * n * (k - 1);

        if (s < minSum || s > maxSum) {
            cout << -1 << endl;
            continue;
        }

        vector<long long> a(n, 0);
        a[0] = b * k;
        s -= b * k;

        for (int i = 0; i < n && s > 0; i++) {
            long long add = min(s, k - 1);
            a[i] += add;
            s -= add;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}