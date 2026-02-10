#include <bits/stdc++.h>
using namespace std;

long long fibo(int n) {
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        long long fn  = fibo(n);
        long long fn1 = fibo(n + 1);
        long long s   = fn1;

        for (int i = 0; i < m; i++) {
            long long w, l, h;
            cin >> w >> l >> h;

            long long maxi = max({w, l, h});


            if (s <= w && s <= l && s <= h && maxi >= fn + fn1)
                cout << 1;
            else
                cout << 0;
        }
        cout << "\n";
    }

    return 0;
}