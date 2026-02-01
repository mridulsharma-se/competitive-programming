#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200000 + 5;

vector<pair<int, long long>> adj[MAXN];
vector<int> color;
vector<bool> visited;
long long total_cost = 0;

void bfs_component(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    color[start] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto [v, w] : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                color[v] = color[u] ^ 1;
                q.push(v);
            } else {
                if (color[v] == color[u]) {
                    total_cost += w;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) adj[i].clear();

    for (int i = 0; i < m; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    color.assign(n + 1, -1);
    visited.assign(n + 1, false);
    total_cost = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) bfs_component(i);
    }

    cout << total_cost / 2 << "\n";  // <-- FIX

    return 0;
}