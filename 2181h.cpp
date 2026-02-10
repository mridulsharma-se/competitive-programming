#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long w, h, d;
    cin >> w >> h >> d;

    long long n;
    cin >> n;

    long long wp = gcd(n, w);
    n /= wp;

    long long hp = gcd(n, h);
    n /= hp;

    long long dp = gcd(n, d);
    n /= dp;

    if (n != 1) {
        cout << -1 << "\n";
        return 0;
    }

    cout << wp - 1 << " " << hp - 1 << " " << dp - 1 << "\n";
    return 0;
}