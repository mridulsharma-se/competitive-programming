#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

       
        vector<pair<long long, int>> arr;
        for (int i = 0; i < n; i++)
            arr.push_back({a[i], i});

        sort(arr.rbegin(), arr.rend());

        vector<long long> pos(n+1, 0);
        long long total = 0;
        long long coord = 1;
        for (int i = 0; i < n; i++) {
            int idx = arr[i].second;
            pos[idx+1]=coord;
            total += 2LL * abs(coord) * arr[i].first;
 
            if(coord>0)
                coord = -coord;
            else
                coord = -coord + 1;
        }

        cout << total << "\n";
        for (long long p : pos)
            cout << p << " ";
        cout << "\n";
    }
}