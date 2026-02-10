#include <bits/stdc++.h>
using namespace std;

long long a[1010];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long ans = -1e18;
        int idx = n;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        
        for (int it = 1; it <= n; it++) {   
            long long sum = 0;

            for (int i = 1; i <= idx; i++)  
                sum += a[i];

           
            if (it == 1) 
                ans = max(ans, sum);
            else 
                ans = max(ans, max(sum, -sum));

            for (int i = 1; i < idx; i++)  
                a[i] = a[i + 1] - a[i];

            idx--;
        }

        cout << ans << "\n";
    }
    return 0;
}