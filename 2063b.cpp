#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        l--; 

        vector<long long> arr(n);
        for (auto &x : arr) cin >> x;

        
        vector<long long> brr = arr;
        sort(brr.begin() + l, brr.end());

        
        vector<long long> crr = arr;
        sort(crr.begin(), crr.begin() + r, greater<long long>());

        long long sum1 = 0, sum2 = 0;
        for (int i = l; i < r; i++) {
            sum1 += brr[i];
            sum2 += crr[i];
        }

        cout << min(sum1, sum2) << '\n';
    }

    return 0;
}