#include <bits/stdc++.h>
using namespace std;

int calc_min_dist(int n, int s, vector<int>& v) {
    int a = v[0], b = v[n - 1];
    vector<int> p = {a, b};
    int ans = INT_MAX;
    sort(p.begin(), p.end());
    do {
        int dist = abs(s - p[0]) + abs(p[1] - p[0]);
        ans = min(ans, dist);
    } while (next_permutation(p.begin(), p.end()));
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << calc_min_dist(n, s, v) << "\n";
    }
    return 0;
}