#include <bits/stdc++.h>
using namespace std;

string l, r;
int sz;
int dp[20][2][2];

int recur(int i, int tight_l, int tight_r) {
    if (i == sz)
        return 0;
    int& ref = dp[i][tight_l][tight_r];
    if (ref != -1)
        return ref;

    int lo = tight_l ? (l[i] - '0') : 0;
    int hi = tight_r ? (r[i] - '0') : 9;
    int res = INT_MAX;

    for (int d = lo; d <= hi; ++d) {
        int next_l = tight_l && (d == l[i] - '0');
        int next_r = tight_r && (d == r[i] - '0');
        int match = (d == l[i] - '0') + (d == r[i] - '0');
        res = min(res, recur(i + 1, next_l, next_r) + match);
    }

    return ref = res;
}

void solve() {
    cin >> l >> r;
    sz = l.size();
    memset(dp, -1, sizeof(dp));
    cout << recur(0, 1, 1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}