#include <bits/stdc++.h>
using namespace std;

using u64 = unsigned long long;
const u64 INF = 4'000'000'000'000'000'000ULL;

static inline int trailing_ones(u64 x) {
    return __builtin_ctzll(~x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        int n;
        u64 k;
        cin >> n >> k;

        vector<u64> v(n);
        for (auto &x : v) cin >> x;

        u64 beauty = 0;
        for (u64 x : v)
            beauty += __builtin_popcountll(x);

        struct Node {
            u64 cost;
            int idx;
            bool operator<(const Node &o) const {
                return cost > o.cost;
            }
        };

        priority_queue<Node> pq;

        auto push_next = [&](int i) {
            int t = trailing_ones(v[i]);
            u64 c = (t >= 61 ? INF : (1ULL << t));
            pq.push({c, i});
        };

        for (int i = 0; i < n; ++i)
            push_next(i);

        while (!pq.empty() && pq.top().cost <= k) {
            auto [cost, i] = pq.top();
            pq.pop();
            k -= cost;
            ++beauty;
            v[i] += cost;
            push_next(i);
        }

        cout << beauty << '\n';
    }

    return 0;
}