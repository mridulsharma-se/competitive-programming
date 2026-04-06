#include <bits/stdc++.h>
using namespace std;

int count_steps(long long a, long long g) {
    int steps = 0;
    while (a > 0) {
        long long new_g = __gcd(a, g);
        a -= new_g;
        steps++;
    }
    return steps;
}

int main() {
    long long l, b, h;
    cin >> l >> b >> h;

    int ans = INT_MAX;

    ans = min(ans, count_steps(l, __gcd(b, h)));
    ans = min(ans, count_steps(b, __gcd(l, h)));
    ans = min(ans, count_steps(h, __gcd(l, b)));

    cout << ans << endl;
}