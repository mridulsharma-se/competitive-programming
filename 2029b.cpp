#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    int cnt0 = 0, cnt1 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
        else cnt1++;
    }

    for (int i = 0; i < n - 1; i++) {
        if (cnt0 == 0 || cnt1 == 0) {
            cout << "NO\n";
            return;
        }
        if (t[i] == '1') cnt0--;
        else cnt1--;
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}