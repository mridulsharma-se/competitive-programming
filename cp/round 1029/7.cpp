#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <limits>
#include <algorithm>

using namespace std;

const int INF = numeric_limits<int>::max();

struct State {
    int node;
    int min_edge;
    int max_edge;
    int cost;

    bool operator>(const State& other) const {
        return cost > other.cost;
    }
};

int min_cost_path(const vector<vector<pair<int,int>>>& graph, int n) {
    // Distance: for each node, store the minimal cost found
    vector<int> dist(n+1, INF);

    // Priority queue: cost, node, min_edge, max_edge
    priority_queue<State, vector<State>, greater<State>> pq;

    // Start at node 1, no edges yet: min_edge = INF, max_edge = 0, cost = min + max = INF + 0
    // To handle correctly, set min_edge to INF so first edge weight becomes min_edge on first step.
    pq.push({1, INF, 0, INF}); 
    dist[1] = INF;  // cost = INF initially (to be improved)

    while (!pq.empty()) {
        State cur = pq.top();
        pq.pop();

        // If we reached node n, return cost
        if (cur.node == n) {
            return cur.min_edge + cur.max_edge;
        }

        // If we already have a better cost for this node, skip
        if (dist[cur.node] < cur.min_edge + cur.max_edge) continue;

        for (auto [neighbor, w] : graph[cur.node]) {
            int new_min = min(cur.min_edge, w);
            int new_max = max(cur.max_edge, w);
            int new_cost = new_min + new_max;

            if (dist[neighbor] > new_cost) {
                dist[neighbor] = new_cost;
                pq.push({neighbor, new_min, new_max, new_cost});
            }
        }
    }

    return -1; // no path found
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<pair<int,int>>> graph(n+1);

        for (int i = 0; i < m; i++) {
            int u,v,w; cin >> u >> v >> w;
            graph[u].emplace_back(v,w);
            graph[v].emplace_back(u,w);
        }

        int ans = min_cost_path(graph, n);
        cout << ans << "\n";
    }

    return 0;
}