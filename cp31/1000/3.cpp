#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long,long long>> c(n);
        for (int i = 0; i < n; i++) c[i] = {a[i], b[i]}; // {quantity, cost}

       
        sort(c.begin(), c.end(), [](auto &x, auto &y) {
            return x.second < y.second;
        });

        long long sum = 0;
        long long pl = n;

        
        sum += p;
        pl -= 1;
        if (pl == 0) { 
            cout << sum << "\n";
            continue;
        }

        
        for (int i = 0; i < n; i++) {
            if (pl == 0) break;
            if (c[i].second >= p) {
                
                sum += pl * p;
                pl = 0;
                break;
            }
            if (pl >= c[i].first) {
                sum += c[i].first * c[i].second;
                pl -= c[i].first;
            } else {
                sum += pl * c[i].second;
                pl = 0;
                break;
            }
        }

       
        if (pl > 0) sum += pl * p;

        cout << sum << "\n";
    }

    return 0;
}