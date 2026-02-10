#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;

        
        vector<pair<ll,ll>> rec = {
            {a, m},          
            {n - a + 1, m},   
            {n, b},          
            {n, m - b + 1}   
        };

        ll ans = LLONG_MAX;

        for (auto [n1, m1] : rec) {
            ll cur = 0;

            
            while (n1 > 1) {
                n1 = (n1 + 1) / 2;
                cur++;
            }

            
            while (m1 > 1) {
                m1 = (m1 + 1) / 2;
                cur++;
            }

            ans = min(ans, cur);
        }

       
        cout << ans + 1 << '\n';
    }
    return 0;
}