#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long k;
        cin >> k;

        long long low = 1, high = 1.5e18;
        long long ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long val = mid - (long long)sqrtl(mid);
            if(val==k){
                high = mid-1;
                ans=mid;
            }

            if (val < k) {
                
                low =mid+1;
            } 
            else if(val > k ){
                high = mid-1;
                
            }
        }

        cout << ans << "\n";
    }
}