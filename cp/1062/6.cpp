#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int M = 200005;

vector<int> g[M];  
int sz[M];         
int n;            


void dfs(int u, int p) {
    sz[u] = 1;
    for (int v : g[u]) {
        if (v == p) continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
}

void solve() {
    int k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) g[i].clear();

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);

    ll ans = n;
    for (int i = 2; i <= n; i++) {
        ll a = sz[i];     
        ll b = n - a;    

        if (a >= k) ans += b;
        if (b >= k) ans += a;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}