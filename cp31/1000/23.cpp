#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;


        int p1 = 1 + d;
        while (!isPrime(p1)) p1++;


        int p2 = p1 + d;
        while (!isPrime(p2)) p2++;


        

        long long ans = 1LL * p1 * p2 ;
        cout << ans << "\n";
    }
    return 0;
}