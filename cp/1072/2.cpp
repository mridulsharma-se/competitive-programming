#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long d = c / b;   
        long long e = c % b;   

        long long f;
        if (d % 2 == 0)
            f = a;
        else
            f = min(a, b);

        long long g = f - e;
        if (g < 0) g = 0;

        cout << g << '\n';
    }

    return 0;
}