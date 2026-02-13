#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;


    while(t--){
        ll a,b,c,k;
        cin >> a >> b>> c>>k;
        ll maxi = 0;
        for(ll i=1;i<=a;i++){
            for(ll j=1;j<=b;j++){
                

                ll l = k/(i*j);
                if(l>c) continue;
                ll ans= (ll)(a-i+1)*(b-j+1)*(c-l+1);
                maxi = max( maxi ,ans );
            }
        }
        cout << maxi << endl;
    }
    return 0;
}