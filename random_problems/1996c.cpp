#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n,q;
        cin >> n >> q;

        string a,b;
        cin >> a >> b;

        vector<vector<int>> pa(n+1, vector<int>(26,0));
        vector<vector<int>> pb(n+1, vector<int>(26,0));

        for(int i=1;i<=n;i++){
            pa[i] = pa[i-1];
            pb[i] = pb[i-1];

            pa[i][a[i-1]-'a']++;
            pb[i][b[i-1]-'a']++;
        }

        while(q--){
            int l,r;
            cin >> l >> r;

            int ans = 0;

            for(int k=0;k<26;k++){
                int ca = pa[r][k] - pa[l-1][k];
                int cb = pb[r][k] - pb[l-1][k];

                if(ca > cb) ans += ca-cb;
            }

            cout << ans << endl;
        }
    }
}