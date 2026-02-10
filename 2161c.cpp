#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int sum = 0;
    int points = 0;
    vector<int> res;

    int i = 0, j = n - 1;

    while(i <= j){
        if(((sum + a[j]) / x) > (sum / x)){
            res.push_back(a[j]);
            points += a[j];
            sum += a[j];
            sum %= x;
            j--;
        }
        else{
            res.push_back(a[i]);
            sum += a[i];
            sum %= x;
            i++;
        }
    }

    cout << points << '\n';
    for(int v : res){
        cout << v << " ";
    }
    cout << '\n';
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