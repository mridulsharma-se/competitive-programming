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

        
        sort(a.begin(), a.end(), greater<long long>());

        long long score = 0;
        long long rem = k;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
               
                score += a[i];
            } else {
               
                long long needed = min(rem, a[i - 1] - a[i]);
                a[i] += needed;
                rem -= needed;
                score -= a[i];
            }
        }

        cout << score << '\n';
    }
    return 0;
}