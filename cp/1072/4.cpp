#include <bits/stdc++.h>
using namespace std;

long long a[35][35];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    for (int i = 0; i <= 32; i++) {
        a[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        int d = log2(n); 
        long long ans = 0;

       
        if (d + 1 > k) ans++;

       
        for (int i = 0; i < d; i++) {
            for (int j = 0; j <= i; j++) {
                
                if (i + j + 1 > k) {
                    ans += a[i][j];
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}