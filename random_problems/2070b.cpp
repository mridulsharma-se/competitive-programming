#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, x, k;
        cin >> n >> x >> k;

        string s;
        cin >> s;

        
        for (int i = 0; i < n && k > 0; i++) {
            if (s[i] == 'L') x--;
            else x++;
            k--;
            if (x == 0) break;
        }

        long long ans = 0;


        if (x == 0) {
            ans = 1;

            
            for (int i = 0; i < n; i++) {
                if (s[i] == 'L') x--;
                else x++;

                if (x == 0) {
                    ans += k / (i + 1);
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}