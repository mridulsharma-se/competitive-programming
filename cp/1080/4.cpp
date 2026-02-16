#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<long long> f(n);
        for(int i = 0; i < n; i++)
            cin >> f[i];

        vector<long long> a(n);
        vector<long long> p(n);

        long long s = (f[0] + f[n-1]) / (n - 1);

        for(int i = 0; i < n - 1; i++) {
            long long d = f[i+1] - f[i];
            p[i] = (d + s) / 2;
        }

        p[n-1] = s;

        a[0] = p[0];
        for(int i = 1; i < n; i++)
            a[i] = p[i] - p[i-1];

        for(int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << "\n";
    }

    return 0;
}