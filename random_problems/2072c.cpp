#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> p(n, x);
        int a = 0;
        bool flag = true;

        for (int i = 0; i < n - 1; i++) {
            if ( ((a | i) & x) == (a | i) ) {
                a |= i;
                p[i] = i;
            } else {
                flag = false;
                break;
            }
        }

       
        if (flag && ((a | (n - 1)) == x)) {
            p[n - 1] = n - 1;
        }

        for (auto it : p) cout << it << " ";
        cout << "\n";
    }

    return 0;
}