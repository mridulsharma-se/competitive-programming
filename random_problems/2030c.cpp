#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') v[i] = 1;
        }

        bool win = false;

        
        if (v[0] || v[n - 1]) win = true;

        
        for (int i = 1; i < n; i++) {
            if (v[i] && v[i - 1]) {
                win = true;
                break;
            }
        }

        cout << (win ? "YES\n" : "NO\n");
    }

    return 0;
}