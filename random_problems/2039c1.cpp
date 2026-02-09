#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long x, m;
        cin >> x >> m;
        int ans=0;

        for(int i = 1; i <= min(2LL * x, m); i++){

            int val = (x ^ i);

            

            if( (x != i) && ( i % val == 0 || x % val == 0 ) ){
                ans++;
            }

        }
        cout << ans << endl;
    }
    return 0;
}