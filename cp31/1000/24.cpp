#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> ma(n, vector<int>(m)); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> ma[i][j];
            }
        }

        long long sum = 0;
        int neg = 0;
        int minu = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ma[i][j] < 0) neg++;
                minu = min(minu, abs(ma[i][j]));
                sum += abs(ma[i][j]);
            }
        }

        if (neg % 2 == 0)
            cout << sum << "\n";
        else
            cout << sum - 2*abs(minu) << "\n";
    }
    return 0;
}