#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        int cnt = 0;
        cin >> n >> k >> s;

        int last = -k; 

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - last >= k) {
                    cnt++;
                    last = i;
                } else {
                    last = i;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}