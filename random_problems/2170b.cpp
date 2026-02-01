#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;
    int cnt_one = 0;

    for (int i = 0; i < n; i++){
        if (a[i] > 0){
            cnt_one++;
        }
        sum += a[i];
    }

    int sum2 = sum - cnt_one;
    int sub = n - 1 - sum2;

    cout << cnt_one - max(0ll, sub) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}