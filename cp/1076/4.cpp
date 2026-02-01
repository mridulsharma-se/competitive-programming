#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());

        vector<long long> pref(n+1, 0);
        for(int i = 0; i < n; i++){
            pref[i+1] = pref[i] + b[i];
        }

        long long ans = 0;

        for(int i = 0; i < n; i++){
            if(i > 0 && a[i] == a[i-1]) continue;

            long long x = a[i];
            long long s = n - i;   

            int k = upper_bound(pref.begin(), pref.end(), s) - pref.begin() - 1;
            if(k > 0){
                ans = max(ans, x * k);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}