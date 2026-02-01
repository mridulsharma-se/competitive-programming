#include <bits/stdc++.h>
using namespace std;

string a, b;
int n;
int m[20][2][2];

int f(char c) {
    return c - '0';
}

int g(int i, bool l, bool r) {
    if (i == n) return 0;
    int &v = m[i][l][r];
    if (v != -1) return v;

    int x = l ? f(a[i]) : 0;
    int y = r ? f(b[i]) : 9;
    int z = INT_MAX;

    for (int d = x; d <= y; ++d) {
        bool u = l && (d == f(a[i]));
        bool w = r && (d == f(b[i]));
        int c = (d == f(a[i])) + (d == f(b[i]));
        z = min(z, g(i + 1, u, w) + c);
    }

    return v = z;
}

void s() {
    cin >> a >> b;
    n = a.size();
    memset(m, -1, sizeof(m));
    cout << g(0, 1, 1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) s();
    return 0;
}