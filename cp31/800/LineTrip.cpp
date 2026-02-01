#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxi = 0;
        for (int i = 1; i < n; i++) {
            maxi = max(maxi, a[i] - a[i-1]);
        }

        maxi = max(maxi, a[0]);
        maxi = max(maxi, ((x - a[n - 1]))*2);

        cout << maxi << endl;
    }
    return 0;
}