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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool flag = true;
        sort(a.begin(), a.end());
        for (int i = 2; i < n; i += 2) {
            if (a[i] != a[i - 1]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}