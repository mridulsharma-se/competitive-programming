#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        string s;
        cin >> s;

        sort(b.begin(), b.end());

       
        vector<long long> d(k+1, 0);
        for(int i = 1; i <= k; i++){
            d[i] = d[i-1] + (s[i-1] == 'R' ? 1 : -1);
        }

       
        unordered_map<long long, int> c;
        for(int i = 1; i <= k; i++){
            if(!c.count(d[i])){
                c[d[i]] = i;
            }
        }

        vector<int> e; 

        for(long long x : a){
            int f = INT_MAX;

         
            auto it = lower_bound(b.begin(), b.end(), x);
            if(it != b.end()){
                long long g = *it - x;
                if(c.count(g)){
                    f = min(f, c[g]);
                }
            }

           
            if(it != b.begin()){
                --it;
                long long g = *it - x;
                if(c.count(g)){
                    f = min(f, c[g]);
                }
            }

            if(f != INT_MAX){
                e.push_back(f);
            }
        }

        sort(e.begin(), e.end());

        int p = 0;
        for(int i = 1; i <= k; i++){
            while(p < (int)e.size() && e[p] <= i){
                p++;
            }
            cout << (n - p) << " ";
        }
        cout << "\n";
    }

    return 0;
}