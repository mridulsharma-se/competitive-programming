#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int ans = -1;

       
        for (int i = 0; i < 31; i++) {
            if (x & (1 << i)) {
           
                for (int j = 0; j < 31; j++) {
                    if (!(x & (1 << j))) {
                        int y = (1 << i) | (1 << j);
                        if (y < x) {
                            ans = y;
                            break;
                        }
                    }
                }
            }
            if (ans != -1) break;
        }

        cout << ans << "\n";
    }

    return 0;
}