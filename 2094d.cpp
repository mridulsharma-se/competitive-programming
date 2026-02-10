#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;


        if (s.size() < p.size() || s.size() > 2 * p.size() || s[0] != p[0]) {
            cout << "NO\n";
            continue;
        }

        vector<int> a, b;
        bool flag = true;

      
        int x = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                x++;
            } else {
                a.push_back(x);
                x = 1;
            }
        }
        a.push_back(x); 

     
        x = 1;
        for (int i = 1; i < p.size(); i++) {
            if (p[i] == p[i - 1]) {
                x++;
            } else {
                b.push_back(x);
                x = 1;
            }
        }
        b.push_back(x); 

       
        if (a.size() != b.size()) {
            cout << "NO\n";
            continue;
        }

      
        for (int i = 0; i < a.size(); i++) {
            if (b[i] > a[i] || a[i] > 2 * b[i]) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}