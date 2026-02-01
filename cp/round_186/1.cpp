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

        bool has2026 = false;
        for (int i = 0; i + 3 < n; i++) {
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6') {
                has2026 = true;
            }
        }

        if (has2026) {
            cout << 0 << "\n";
            continue;
        }

        int ops = 0;
        for (int i = 0; i + 3 < n; i++) {
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5') {
                ops++;
                i += 3;
            }
        }
        if(ops >1) ops=1;
        cout << ops << "\n";
    }
    return 0;
}