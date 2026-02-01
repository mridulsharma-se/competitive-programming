#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long ans = n; 
        for (int i = 2; i < n; i++) {
            if (s[i] != s[i - 2]) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}