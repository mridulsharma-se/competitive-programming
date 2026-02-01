#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<long long> c(51, 0);
        long long d = 0;
        for (int i = 0; i < b; i++) {
            int e;
            cin >> e;
            c[e]++;
            d += e;
        }

        vector<long long> f = c;
        long long g = 0;

        for (int h = 51; h >= 1; h--) {
            long long i = LLONG_MAX;
            for (int j = 0; j < h; j++) {
                if (f[j] == 0) {
                    i = 0;
                    break;
                }
                i = min(i, f[j]);
            }
            if (i == 0) continue;
            g += i * h;
            for (int j = 0; j < h; j++) {
                f[j] -= i;
            }
        }

        long long k = 0;
        for (int j = 0; j <= 50; j++) {
            k += j * f[j];
        }

        cout << g + k << "\n";
    }
    return 0;
}