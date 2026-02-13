#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<vector<int>> pos(n+1);

        for(int i=1;i<=n;i++){
            int x;
            cin>>x;

            if(x <= n)
                pos[x].push_back(i);
        }

        long long ans = 0;

        int limit = sqrt(n) + 1;

        for(int x = 1; x <= n; x++) {

            if(pos[x].empty()) continue;
            if(x > limit) break;

            for(int y = 1; x*y <= n; y++) {

                if(y > n) break;
                if(pos[y].empty()) continue;

                int diff = x*y;

                for(int i : pos[x]) {

                    int j = i + diff;

                    if(j > n) break;

                    // binary search because positions sorted
                    if(binary_search(pos[y].begin(), pos[y].end(), j))
                        ans++;
                }
            }
        }

        cout<<ans<<"\n";
    }
}