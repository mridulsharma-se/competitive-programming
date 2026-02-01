#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        int r = 0;

        for (int n = 1; n <= 60; n++) {
            long long s = (1LL << n) - 1;
            if (a + b < s) break;

            long long x = (s + 1) / 3;   
            long long y = s - x;

            bool f = false;
            if ((x <= a && y <= b) || (x <= b && y <= a))
                f = true;

            if (f) r = n;
            else break;
        }

        cout << r << "\n";
    }
    return 0;
}