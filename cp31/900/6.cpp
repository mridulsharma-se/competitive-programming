#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  // number of test cases
    cin >> t;

    while (t--) {
        int n; 
        long long k;  
        int cnt=0;
        cin >> n >> k;   
        int ans=1;
        vector<long long> a(n);
        vector<long long> b(n-1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];   
        }
        sort(a.begin(), a.end());
        for(int i = 1; i < n; ++i) {
        if(a[i] - a[i - 1] > k) {
            cnt = 1;
        } else {
            ++cnt;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << '\n';

       
    }

    return 0;
}