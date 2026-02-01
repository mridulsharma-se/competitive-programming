#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }


        long long D = a[2] - a[1];
        bool is_arith = true;
        for (int i = 2; i < n; i++) {
            if (a[i + 1] - a[i] != D) {
                is_arith = false;
                break;
            }
        }

        if (!is_arith) {
            cout << "NO" << endl;
            continue;
        }

        long long M = n + 1LL;
        long long temp = a[1] - D;
        if (temp % M != 0) {
            cout << "NO" << endl;
            continue;
        }


        long long y = temp / M;
        if (y < 0) {
            cout << "NO" << endl;
            continue;
        }


        long long x = y + D;
        if (x < 0) {
            cout << "NO" << endl;
            continue;
        }

        
        cout << "YES" << endl;
    }

    return 0;
}