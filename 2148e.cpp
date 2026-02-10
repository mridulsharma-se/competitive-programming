#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> cnt(n + 1, 0), cur(n + 1, 0);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    for(int i = 0; i <= n; i++){
        if(cnt[i] % k){
            cout << 0 << endl;
            return;
        }
        cnt[i] /= k;
    }

    int ans = 0;

    for(int l = 0, r = 0; r < n; r++){
        cur[a[r]]++;

        while(cur[a[r]] > cnt[a[r]]){
            cur[a[l]]--;
            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}