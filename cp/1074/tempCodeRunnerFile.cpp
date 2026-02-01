#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, m, h;
    cin >> n >> m >> h;   // FIXED ORDER

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> b = a;
    vector<int> last(n, -1);
    int lastReset = -1;

    for(int i = 0; i < m; i++){
        int q, w;
        cin >> q >> w;
        q--;   

     
        if(last[q] < lastReset){
            b[q] = a[q];
        }

        int newVal = b[q] + w;

        if(newVal > h){
            
            lastReset = i;
        } else {
            
            b[q] = newVal;
            last[q] = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(last[i] < lastReset){
            b[i] = a[i];
        }
        cout << b[i] << " ";
    }
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}