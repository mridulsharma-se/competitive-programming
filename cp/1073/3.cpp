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

        int z = 0;
        for (char c : s) {
            if (c == '0') {
                z++;
            }
        }

        vector<int> v;
        for (int i = 0; i < z; i++) {
            if (s[i] == '1') {
                v.push_back(i + 1);
            }
        }
        for (int i = z; i < n; i++) {
            if (s[i] == '0') {
                v.push_back(i + 1);
            }
        }

        if (v.empty()) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
            cout << (int)v.size() << "\n";
            for (int i = 0; i < (int)v.size(); i++) {
                cout << v[i];
                if (i + 1 == (int)v.size()) {
                    cout << "\n";
                } else {
                    cout << " ";
                }
            }
        }
    }

    return 0;
}