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

        int o = 0;               
        for (char c : s) {
            if (c == '(') o++;
        }

        bool ok = false;

        for (int i = 0; i  < n-1; i++) {
            if (s[i] == '(') {
                o--;               
            }

            if (s[i] == ')' && s[i + 1] == '(') {
               
                if (o - 1 > 0) {
                    ok = true;
                    break;
                }
            }
        }

        if (ok) {
            cout << n - 2 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}