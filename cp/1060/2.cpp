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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0;
        vector<long long> b = a;
        long long muxi=0;
        for (int i = 0; i < n; i++){
            muxi = max(muxi, b[i]);
            if(i%2==1){
                b[i] = max(b[i], muxi);
                
            }

        }
        for(int i=1;i<n-1;i+=2){
            if(b[i]>b[i-1] && b[i]>b[i+1]){
                continue;
            }
            else{
                b[i]==max(b[i-1],b[i+1])+1;
            }
            

            
        }

        

        cout << ans << "\n";
    }
    return 0;
}