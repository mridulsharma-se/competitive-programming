#include <bits/stdc++.h>
using namespace std;


long long findGCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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

        
        long long g = a[0];
        for (int i = 1; i < n; i++) {
            g = findGCD(g, a[i]);
        }

        
        if (g == 1) {
            cout << 2 << "\n";
            continue;
        }

        
        long long x = 2;
        while (x <= 1000000000000000000LL) { 
            if (findGCD(g, x) == 1) {
                cout << x << "\n";
                break;
            }
            x++;
        }

        if (x > 1000000000000000000LL)
            cout << -1 << "\n";
    }

    return 0;
}