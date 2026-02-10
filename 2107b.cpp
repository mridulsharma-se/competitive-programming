#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        long long mn = *min_element(a.begin(), a.end());
        long long mx = *max_element(a.begin(), a.end());
        int cnt = count(a.begin(), a.end(), mx);

       
        long long new_mx;
        if (cnt > 1)
            new_mx = mx;       
        else
            new_mx = mx - 1;   

      
        if (new_mx - mn > k) {
            cout << "Jerry\n";
        } else {
            
            if (sum % 2 == 1)
                cout << "Tom\n";
            else
                cout << "Jerry\n";
        }
    }
    return 0;
}