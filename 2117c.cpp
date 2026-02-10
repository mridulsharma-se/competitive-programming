#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 1;
    int ans = 1;

    set<int> need, nextSeg;
    need.insert(a[0]);

    while (i < n) {
        while (i < n && !need.empty()) {
            if (need.count(a[i])) {
                need.erase(a[i]);
            }
            nextSeg.insert(a[i]);
            i++;
        }

        if (!need.empty()) break;

        ans++;
        need = nextSeg;
        nextSeg.clear();
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}