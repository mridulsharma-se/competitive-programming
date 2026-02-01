#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        bool flag=0;
        bool fucku=false;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%k==0) {
                flag=1;
                
            }
            
        }
        if(flag==1) {
            cout<<0<<"\n";
        }

        else{
            if (k == 4) {
            int even = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0 ) {
                    even++;
                }
                if(a[i]==3 || a[i]==7){
                    fucku=true;
                }

                
            }
            if (even >= 2) cout << 0 << "\n";
            else if (even == 1 || fucku) cout << 1 << "\n";
            else cout << 2 << "\n";
        } 
        else {
            int maxi = INT_MAX;
            for (int i = 0; i < n; i++) {
                int sum=0;
                if (a[i] % k == 0) sum = 0;
                else sum = k - (a[i] % k);
                maxi = min(maxi, sum);
            }
            cout << maxi << "\n";
        }
    }
}

    return 0;
}