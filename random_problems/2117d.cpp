#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

  
    long long y = (2LL * a[0] - a[1]) / (n + 1);
    long long x = a[1] - a[0] + y;

    if (y < 0 || x < 0) {
        cout << "NO\n";
        return;
    }

    
    for(int i = 0; i < n; i++){
        a[i] -= x * (i + 1);
        a[i] -= y * (n - i);
    }

    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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