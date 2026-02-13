#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        long long p, q;
        cin >> p >> q;


        if(p<q && (__int128)3 * p >= (__int128)2 * q)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }

    return 0;
}