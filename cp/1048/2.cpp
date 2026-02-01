#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;  
        int it;
        long long op = 0;  // initialize

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }

        sort(a.begin(), a.end());

        if (m > n) {
            it = m - n;
            op = a[0] * (it + 1);
            for (int i = 1; i < n; i++) {
                op += a[i] * (it + i + 1);
            }
        } 
        else {
            int j = 1;
            for (int i = n - m; i < n; i++) { 
                op += a[i] * j;
                j++;
            }
        }

        cout << op << "\n";
    }

    return 0;
}