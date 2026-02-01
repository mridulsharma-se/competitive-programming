#include <bits/stdc++.h>
using namespace std;

long long mygcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long mn = *min_element(a.begin(), a.end());
        int cnt = 0;

        for (auto x : a) {
            if (x == mn) cnt++;
        }

       
        if (cnt >= 2) {
            cout << "Yes\n";
            continue;
        }

      
        long long g = 0;
        for (auto x : a) {
            if (x != mn && x % mn == 0) {
                long long val = x / mn;
                g = (g == 0 ? val : mygcd(g, val));
            }
        }

        if (g == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}