#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        int sum = 0;
        int two = 0;
        int three = 0;

        for (int i = 0; i < n.size(); i++) {
            int d = n[i] - '0';
            sum += d;
            if (d == 2) two++;
            if (d == 3) three++;
        }

        bool flag = false;
        int rem = sum % 9;

        
        for (int a = 0; a <= min(8, two); a++) {
            for (int b = 0; b <= min(2, three); b++) {
                if ((rem + 2 * a + 6 * b) % 9 == 0) {
                    flag = true;
                }
            }
        }

        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}