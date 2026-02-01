#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> l(n + 1), r(n + 1);
    vector<int> sum(2 * n + 2, 0), cnt(2 * n + 2, 0);

    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i];
        if (l[i] == r[i]) {
            sum[l[i]] = 1;
            cnt[l[i]]++;
        }
    }

   
    for (int i = 1; i <= 2 * n; i++) {
        sum[i] += sum[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        if (l[i] == r[i]) {
            
            cout << (cnt[l[i]] <= 1 ? '1' : '0');
        } else {
           
            int forced = sum[r[i]] - sum[l[i] - 1];
            int len = r[i] - l[i] + 1;
            cout << (forced < len ? '1' : '0');
        }
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}