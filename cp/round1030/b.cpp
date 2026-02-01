#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n + 1); // 1-based indexing
        vector<int> S;

        p[1] = 2;
        p[n] = 1;

        int L = 3, R = n;
        while (L < R) {
            S.push_back(L++);
            S.push_back(R--);
        }
        if (L == R) {
            S.push_back(L);
        }

        for (int i = 2; i <= n - 1; ++i) {
            p[i] = S[i - 2];
        }

        for (int i = 1; i <= n; ++i) {
            cout << p[i] << (i == n ? '\n' : ' ');
        }
    }
    return 0;
}