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

        long long ops = 0;

        for (int i = 0; i < n; i++) {
            long long a, b, c, d;
            cin >> a >> b >> c >> d;

            if (b > d) {
               
                ops += a + (b - d);
            } else {
                
                ops += max(0LL, a - c);
            }
        }

        cout << ops << "\n";
    }

    return 0;
}