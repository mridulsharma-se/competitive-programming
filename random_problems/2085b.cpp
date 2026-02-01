#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int ze = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0) ze++;
        }

       
        if (ze == 0) {
            cout << 1 << "\n";
            cout << 1 << " " << n << "\n";
            continue;
        }

       
        if (ze == n) {
            cout << 3 << "\n";
            cout << n-1 << " " << n << "\n";
            cout << 1 << " " << n-2 << "\n";
            cout << 1 << " " << 2 << "\n";
            continue;
        }

        
        if (a[n-1] == 0) {
            cout << 2 << "\n";
            cout << n-1 << " " << n << "\n";
            cout << 1 << " " << n-1 << "\n";
            continue;
        }

        
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << 2 << "\n";
    }

    return 0;
}