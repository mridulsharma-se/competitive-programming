#include <bits/stdc++.h>
using namespace std;

bool s(long long n) {
    long long j = n;
    while (j) {
        int d = j % 10;
        if (d != 0 && n % d != 0)
            return false;
        j /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (s(n)) cout << n << "\n";
        else {
            while (!s(n)) n++;
            cout << n << "\n";
        }
    }
}