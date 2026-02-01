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
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        vector<int> p(n);
        bool ok = true;

        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && s[j] == s[i]) j++; 
            int len = j - i;

            if (len == 1) {
                ok = false;
                break;
            }

            
            for (int k = 0; k < len; k++) {
                p[i + k] = i + (k + 1) % len;
            }

            i = j;
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++) {
                cout << p[i] + 1 << " "; // convert to 1-based index
            }
            cout << "\n";
        }
    }

    return 0;
}