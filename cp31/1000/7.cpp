#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        unordered_map<int, int> p, q;


        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;
            p[a[i]] = max(p[a[i]], j - i);
            i = j;
        }


        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && b[j] == b[i]) j++;
            q[b[i]] = max(q[b[i]], j - i);
            i = j;
        }

        int ans = 0;
        for (auto &[x, y] : p) ans = max(ans, y + q[x]);
        for (auto &[x, y] : q) ans = max(ans, y + p[x]);

        cout << ans << "\n";
    }

    return 0;
}