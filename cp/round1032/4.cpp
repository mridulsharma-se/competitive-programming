#include <bits/stdc++.h>
using namespace std;

void apply_swap(vector<int>& x, vector<pair<int, int>>& res, int t) {
    int n = x.size();
    for (int i = 1; i < n; ++i) {
        int j = i;
        while (j > 0 && x[j] < x[j - 1]) {
            swap(x[j], x[j - 1]);
            res.emplace_back(t, j);
            --j;
        }
    }
}

void solve_case() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    vector<pair<int, int>> ans;

    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            swap(a[i], b[i]);
            ans.emplace_back(3, i + 1);
        }
    }

    apply_swap(a, ans, 1);  
    apply_swap(b, ans, 2);  

    cout << ans.size() << "\n";
    for (auto& p : ans)
        cout << p.first << " " << p.second << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    return 0;
}