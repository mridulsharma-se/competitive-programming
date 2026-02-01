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

        int ods = 0, ens = 0;
        for (char ch : s) {
            if (ch == '0') ens++;
            else ods++;
        }

        if (ens == ods) {
            cout << 0 << "\n";
        } else {
            for (char ch : s) {
                if (ens == -1 || ods == -1) break;
                if (ch == '0') ods--;
                else ens--;
                
            }
            cout << ens + ods+1 << "\n";
        }
    }

    return 0;
}