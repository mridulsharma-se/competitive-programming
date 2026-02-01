#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
 
       
        if (n == 1) {
            if (k == 1) {
                cout << 1 << '\n' << 1 << '\n';
            } else {
                cout << -1 << '\n';
            }
            continue;
        }
 
    
        if (k == 1 || k == n) {
            cout << -1 << '\n';
            continue;
        }
 
       
        int p2 = k - (k % 2);
        int p3 = k + 1 + (k % 2);
 
        cout << 3 << '\n';
        cout << 1 << " " << p2 << " " << p3 << '\n';
    }
 
    return 0;
}