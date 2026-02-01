#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;  

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }

        vector<pair<long long,int>> p(n);

        for (int i = 0; i < n; i++) {
            long long rem = a[i] % k;
            if (rem == 0) rem = k;   // important fix
            p[i].first = rem;   
            p[i].second = i;    
        }

        sort(p.begin(), p.end(), [&](auto &x, auto &y) {
            if (x.first != y.first) return x.first > y.first; // bigger remainder first
            return x.second < y.second;                       // smaller index first
        });

        for (int i = 0; i < n; i++) {
            cout << p[i].second + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}