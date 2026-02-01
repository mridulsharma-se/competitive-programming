#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2e5 + 5;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i]--; // Convert to 0-based indexing
    }
    
    // Compute last occurrence of each element
    vector<int> last(MAX_N, -1);
    for (int i = 0; i < n; ++i) {
        last[a[i]] = i;
    }
    
    // Cumulative sets for prefix [0..i-1]
    vector<bitset<MAX_N>> C(n + 1);
    C[0].reset();
    for (int i = 0; i < n; ++i) {
        C[i + 1] = C[i];
        C[i + 1][a[i]] = 1;
    }
    
    // DP array: dp[i] = max segments for [0..i-1]
    vector<int> dp(n + 1, 0);
    // Track the earliest valid split point
    vector<int> last_valid(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
        dp[i] = 1; // Single segment [0..i-1]
        // Find the earliest position where all elements in [0..j-1] appear in [j..i-1]
        int min_j = i;
        bitset<MAX_N> current_set;
        current_set.reset();
        for (int j = i - 1; j >= last_valid[i - 1]; --j) {
            current_set[a[j]] = 1;
            // Check if all elements in [0..j-1] appear in [j..i-1]
            if ((C[j] & current_set) == C[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
                min_j = min(min_j, j);
            }
            // Prune if all elements in [0..j-1] have their last occurrence before i
            bool can_prune = true;
            for (int x = 0; x < n; ++x) {
                if (C[j][x] && last[x] < i) {
                    can_prune = false;
                    break;
                }
            }
            if (can_prune) break;
        }
        last_valid[i] = min_j;
    }
    
    cout << dp[n] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}