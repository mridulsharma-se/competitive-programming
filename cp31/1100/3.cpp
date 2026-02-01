#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for(int i=0;i<n;i++){
            vector<long long> b = a ;
            b.erase(b.begin()+i);
            long long ans = 0;
            sort(b.begin(),b.end());
            
            cout << ans << " ";
        }

        
        
        cout << "\n";
    }
}