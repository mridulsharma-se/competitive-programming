#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    bool zeros = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 0 && a[i + 1] == 0) {
            zeros = true;
            break;
        }
    }
    
    bool ones = true;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            ones = false;
            break;
        }
    }
    
    if (zeros || ones) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}