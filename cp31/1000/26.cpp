#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;  

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;  
        long long total = y * k + k - 1;
        long long ans = (total + x - 2) / (x - 1) + k; 
        cout << ans << "\n";
    }

    return 0;
}