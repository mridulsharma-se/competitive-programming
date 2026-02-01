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

        long long c = 0;

        for (long long d = 0; (1LL << d) <= a; d++) {
            long long e = a >> d;     
            long long f = b - d + 1;  

            if (f <= 1) {
                c += (e + 1) / 2;
            } 
            else if (f <= e) {
                long long g;
                if (f % 2 == 1)
                    g = f;
                else
                    g = f + 1;

                if (g <= e)
                    c += (e - g) / 2 + 1;
            }
        }

        cout << c << '\n';
    }

    return 0;
}