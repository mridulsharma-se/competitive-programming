#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        vector<long long> a(n+2), b(n+2), c(n+2, 0);

        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];

       
        for(int i = n; i >= 1; i--){
            c[i] = max({a[i], b[i], c[i+1]});
        }

       
        vector<long long> p(n+2, 0);
        for(int i = 1; i <= n; i++){
            p[i] = p[i-1] + c[i];
        }

        while(q--){
            int l, r;
            cin >> l >> r;
            cout << (p[r] - p[l-1]) << " ";
        }
        cout << "\n";
    }

    return 0;
}