#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;
        long long  fmin=INT_MAX;
        long long smin=INT_MAX;
        uint64_t sum=0;

        for(int i=0;i<n;i++){
            int m;
            cin >> m;
            vector<int> a(m);

            for(int j=0;j<m;j++){
                cin >> a[j];

            
            }
            sort(a.begin(),a.end());
            fmin= min(fmin,1ll*a[0]);
            smin= min(smin,1ll*a[1]);
            sum = sum + a[1];
    }
    cout << sum - smin + fmin << "\n";
     
}


    return 0;
}