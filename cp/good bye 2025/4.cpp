#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

       
        vector<pair<long long,int>> v;
        for(int i = 0; i < n; i++)
            v.push_back({a[i], i + 1});

        sort(v.begin(), v.end());

        vector<pair<int,int>> ans;

       
        if(m == n){
            cout << -1 << "\n";
            continue;
        }

        
        if(m == 1){
            for(int i = 0; i < n - 1; i++){
                ans.push_back({v[i].second, v[i + 1].second});
            }
        }

      
        else if(m >= 2){
            if(n < 2 * m){
                cout << -1 << "\n";
                continue;
            }
            for(int i = 0; i < m; i++){
                ans.push_back({v[i].second, v[i + m].second});
            }
        }

        
        else{
            long long need = v[n - 1].first;
            long long cur = 0;
            int k = -1;

            for(int i = n - 2; i >= 0; i--){
                cur += v[i].first;
                if(cur >= need){
                    k = i;
                    break;
                }
            }

            if(k == -1){
                cout << -1 << "\n";
                continue;
            }

           
            for(int i = 0; i < k; i++){
                ans.push_back({v[i].second, v[k].second});
            }

           
            for(int i = k + 1; i < n - 1; i++){
                ans.push_back({v[i].second, v[n - 1].second});
            }

          
            ans.push_back({v[k].second, v[n - 1].second});
        }

        cout << ans.size() << "\n";
        for(auto &x : ans){
            cout << x.first << " " << x.second << "\n";
        }
    }
    return 0;
}