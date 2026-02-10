#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
 
void solve(){
    int n;
    cin >> n;
 
    vector<int> a(2*n);
    for(int i = 0; i < 2*n; i++){
        cin >> a[i];
    }
 
    vector<int> cnt(2*n + 1, 0);
    for(auto &x : a){
        cnt[x]++;
    }
 
    int x = 0, y = 0, z = 0;
 
    for(int i = 1; i <= 2*n; i++){
        if(cnt[i] == 0) continue;
 
        if(cnt[i] & 1) x++;
        else if(cnt[i] % 4) y++;
        else z++;
    }
 
    int ans = x + 2*y + 2*z;
 
    if((z & 1) && x == 0){
        ans -= 2;
    }
 
    cout << ans << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
