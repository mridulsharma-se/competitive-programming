#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        a.erase(a.begin(), a.begin() + k);

        int x = a[0];
        int ans = 1;

        if (a.size() == 1) ans = x;
        else if (x >= 2) ans = x / 2;
        else ans = 1;

        cout << ans << "\n";
    }
}