#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int n;
        cin >> n;
        vector<int> p(n);
        int mx = 0;
        for(int i = 0; i < n; i++) {
            cin >> p[i];
            mx = max(mx, p[i]);
        }
        int prev = 0;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            sum += max(0, p[i] - prev);
            prev = p[i];
        }
        if(sum == mx) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}