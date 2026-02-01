#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<int> c(b);
        for (int d = 0; d < b; ++d) cin >> c[d];

        bool e = false;
        int f = -1, g = -1;

        for (int h = 0; h < b && !e; ++h) {
            for (int i = h + 1; i < b; ++i) {
                if (c[h] > c[i]) {
                    f = h;
                    g = i;
                    e = true;
                    break;
                }
            }
        }

        if (!e) {
            cout << "NO\n";
        } else {
            cout << "YES\n2\n" << c[f] << " " << c[g] << "\n";
        }
    }

    return 0;
}