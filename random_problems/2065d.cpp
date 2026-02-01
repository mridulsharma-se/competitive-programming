#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> sum(n), score(n);

        for (int i = 0; i < n; i++) {
            long long pref = 0;
            sum[i] = 0;
            score[i] = 0;

            for (int j = 0; j < m; j++) {
                long long x;
                cin >> x;
                sum[i] += x;
                pref += x;
                score[i] += pref;
            }
        }


        vector<pair<long long, long long>> p;
        for (int i = 0; i < n; i++) {
            p.push_back({sum[i], score[i]});
        }

     
        sort(p.begin(), p.end(), greater<>());

        long long cur = 0;
        long long ans = 0;

        for (auto &pr : p) {
            long long S = pr.first;
            long long sc = pr.second;

            ans += sc + cur * m;
            cur += S;
        }

        cout << ans << "\n";
    }

    return 0;
}