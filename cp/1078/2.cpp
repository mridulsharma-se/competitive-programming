#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n,x,y;
        cin >> n >> x >> y;

        vector<ll>a(n);
        ll t = 0;

        for(int i=0;i<n;i++){
            cin >> a[i];
            t += (a[i]/x)*y;
        }

        ll ans = 0;

        for(int i=0;i<n;i++){
            ll cur = a[i] + (t - (a[i]/x)*y);
            ans = max(ans, cur);
        }

        cout << ans << endl;
    }
}