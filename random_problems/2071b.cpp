#include <bits/stdc++.h>
using namespace std;

bool isSquare(long long x) {
    long long r = sqrtl(x);
    return r * r == x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long total = 1LL * n * (n + 1) / 2;
        if (isSquare(total)) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) a[i] = i;

        for (int i = 1; i < n; i++) {
            long long pref = 1LL * i * (i + 1) / 2;
            if (isSquare(pref)) {
                swap(a[i], a[i + 1]);
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}