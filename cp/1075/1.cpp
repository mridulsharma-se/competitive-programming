#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h, l;
    cin >> n >> h >> l;

    int b = 0, r = 0, c = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x <= h && x <= l) b++;
        else if (x <= h) r++;
        else if (x <= l) c++;
    }

   
    int s = min(r, c);
    r -= s;
    c -= s;

   
    int d = max(r, c);
    int t = min(b, d);
    s += t;
    b -= t;

  
    s += b / 2;

    cout << s << "\n";
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