#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a; 
    while (a--) {
        int b;
        cin >> b;  
        vector<long long> c(b);

        bool d = false, e = false;

        for (int i = 0; i < b; i++) {
            cin >> c[i];
            if (c[i] % 2 == 0) d = true;
            else e = true;
        }

        if (d && e) sort(c.begin(), c.end()); 

        for (long long x : c) cout << x << " ";
        cout << "\n";
    }

    return 0;
}