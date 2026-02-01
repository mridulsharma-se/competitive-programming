#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;

        if (k == 1) {
            cout << n << '\n';
            continue;
        }

        if (k & 1) {
          
            for (int i = 0; i < k; i++) cout << n << " ";
            cout << '\n';
        } else {
            
            long long x = n & -n;      
            long long a = n - x;
            long long b = x;

           
            for (int i = 0; i < k - 2; i++) cout << n << " ";
            cout << a << " " << b << '\n';
        }
    }
    return 0;
}