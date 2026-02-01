#include <bits/stdc++.h>
using namespace std;

int getBits(long long x) {
    if (x == 0) return 1; 
    int b = 0;
    while (x > 0) {
        x >>= 1; 
        b++;
    }
    return b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        
        
        int b = getBits(x);
        long long ans = 2LL * b + 1;
        cout << ans << "\n";
    }
    return 0;
}