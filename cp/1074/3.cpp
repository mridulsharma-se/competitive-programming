#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int ma = 1;
    int es = 1;

    for(int i = 1; i < (int)a.size(); i++){
        if(a[i] == a[i-1] + 1){
            es++;
        } else {
            ma = max(ma, es);
            es = 1;
        }
    }

    ma = max(ma, es);

    cout << ma << "\n";
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