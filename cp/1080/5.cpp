#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;
const int nmax = 300005;

int l[nmax], r[nmax];
long long dp[nmax], ans[nmax];

void dfs1(int u){
    dp[u] = 1;
    if(l[u]){
        dfs1(l[u]);
        dp[u] += dp[l[u]];
    }
    if(r[u]){
        dfs1(r[u]);
        dp[u] += dp[r[u]];
    }
}

void dfs2(int u, long long p){
    ans[u] = (p + (2*dp[u] - 1)) % mod;
    if(l[u]) dfs2(l[u], ans[u]);
    if(r[u]) dfs2(r[u], ans[u]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        for(int i=1;i<=n;i++)
            cin >> l[i] >> r[i];

        dfs1(1);
        dfs2(1,0);

        for(int i=1;i<=n;i++){
            cout << ans[i];
            if(i<n) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}