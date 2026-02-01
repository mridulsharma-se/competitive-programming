#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> m;
        for (auto x : a) {
            m[x]++;  
        }

       
        vector<pair<int, int>> v;
        for (auto &p : m) {
            v.push_back(p);
        }

       
        sort(v.begin(), v.end(), [](auto &x, auto &y) {
            if (x.second == y.second)
                return x.first < y.first;
            return x.second < y.second;
        });
        int m=v[0].second;
        int cnt=1;
        for(int i=0;i<n;i++){
            

        }
        
    }
}