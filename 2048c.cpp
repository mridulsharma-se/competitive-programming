#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

       
        int z = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                z = i;
                break;
            }
        }


        if (z == -1) {
            cout << 1 << " " << n << " 1 1\n";
            continue;
        }

        int len = n - z;
        string best = "";
        int best_l = 0;

        for (int l = 0; l < z; l++) {
            if (s[l] != '1') continue;

            string cur = "";
            for (int i = 0; i < len; i++) {
                cur.push_back((s[z + i] != s[l + i]) + '0');
            }

            if (cur > best) {
                best = cur;
                best_l = l;
            }
        }

        cout << 1 << " " << n << " "
             << best_l + 1 << " " << best_l + len << "\n";
    }

    return 0;
}