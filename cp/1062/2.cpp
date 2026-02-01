#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q; 

    while (q--) {
        int n;
        cin >> n;  

        string s, t;
        cin >> s >> t; 

        map<char, int> mp; 
        for (char c : s) mp[c]++;
        for (char c : t) mp[c]--;

        bool ok = true;
        for (auto it : mp) {
            if (it.second != 0) {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}