#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w, h, a, b;
    int x1, y1, x2, y2;
    cin >> w >> h >> a >> b;
    cin >> x1 >> y1 >> x2 >> y2;

    bool ok = false;

    
    if (x1 != x2 && (abs(x2 - x1) % a == 0)) {
        ok = true;
    }

    
    if (y1 != y2 && (abs(y2 - y1) % b == 0)) {
        ok = true;
    }
    if(x1==x2 && y1==y2) ok=true;

    cout << (ok ? "YES\n" : "NO\n");
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