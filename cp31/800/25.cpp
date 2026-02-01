#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                cnt++; 
            }
            else break;
        }

        cout << n-2*cnt << endl;
    }

    return 0;
}