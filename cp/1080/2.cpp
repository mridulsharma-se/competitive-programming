#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        bool ok = true;

        for(int i = 1; i <= n; i++) {
            int x = i;
            while(x % 2 == 0) x /= 2;

            int y = a[i];
            while(y % 2 == 0) y /= 2;

            if(x != y) {
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}