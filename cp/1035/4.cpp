#include <iostream>
#include <vector>
using namespace std;

int z(int a, int b) {
    vector<int> c(a + 1, 0);
    c[0] = 1 % b;
    int d = 0;

    for (int e = a; e > 0; --e) {
        for (int f = d; f >= 0; --f) {
            if (!c[f]) continue;
            int g = a - e + 1 - f;
            if (g <= 0) break;

            long long h = (1LL * c[f] * g) % b;
            h = (h * e) % b;

            c[f + 1] = (c[f + 1] + h) % b;
        }
        if (c[d + 1]) ++d;
    }

    int i = 0;
    for (int j : c) {
        i = (i + j) % b;
    }
    return i;
}

int main() {
    int k;
    cin >> k;
    while (k--) {
        int l, m;
        cin >> l >> m;
        cout << z(l, m) << '\n';
    }
    return 0;
}