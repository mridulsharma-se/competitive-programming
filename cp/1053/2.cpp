#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> sets(n);
        for(int i = 0; i < n; i++) {
            int l;
            cin >> l;
            sets[i].resize(l);
            for(int j = 0; j < l; j++) cin >> sets[i][j];
        }

        bool found = false;
        unordered_set<int> st;

        // Check single sets
        for(int i = 0; i < n; i++) {
            for(int x : sets[i]) st.insert(x);
            bool ok = true;
            for(int k = 1; k <= m; k++) {
                if(st.find(k) == st.end()) { ok = false; break; }
            }
            if(ok) {
                cout << "YES\n";
                found = true;
                break;
            }
            for(int x : sets[i]) st.erase(x);
        }

        if(found) continue;

        // Check all pairs of sets
        for(int i = 0; i < n && !found; i++) {
            for(int j = i+1; j < n && !found; j++) {
                for(int x : sets[i]) st.insert(x);
                for(int x : sets[j]) st.insert(x);

                bool ok = true;
                for(int k = 1; k <= m; k++) {
                    if(st.find(k) == st.end()) { ok = false; break; }
                }

                if(ok) {
                    cout << "YES\n";
                    found = true;
                }

                for(int x : sets[i]) st.erase(x);
                for(int x : sets[j]) st.erase(x);
            }
        }

        if(!found) cout << "NO\n";
    }

    return 0;
}