#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        vector<bool> p(n+1, false);

        int mn = n+1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            p[a[i]] = true;
            mn = min(mn, a[i]);
        }

        vector<int> d(n+1, INF);

        for(int x : a){
            d[x] = 1;
        }

       
        for(int i = mn; i <= n; i++){
            if(!p[i]) continue;
            if(i == 1) continue; 

            for(int j = i; j <= n; j += i){
                int r = j / i;
                if(d[r] != INF){
                    d[j] = min(d[j], d[r] + 1);
                }
            }
        }

       
        for(int i = 1; i <= n; i++){
            if(d[i] == INF) cout << -1;
            else cout << d[i];
            if(i < n) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}