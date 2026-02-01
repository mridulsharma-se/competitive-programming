#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        long long q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                count++;
            } else {
                if (count > 0) {
                    if (count >= k) {
                        sum += 1LL * (count - k + 1) * (count - k + 2) / 2;
                    }
                    count = 0;
                }
            }
        }

        
        if (count >= k) {
            sum += 1LL * (count - k + 1) * (count - k + 2) / 2;
        }

        cout << sum << endl;
    }
    return 0;
}