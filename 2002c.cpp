#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n), b(n);

        
        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
        }

        long long x,y,x1,y1;
        cin >>x>>y>>x1>>y1;
        
        long long c = x1-x;
        long long d = y1-y;
        long long ans = 1LL*c*c+1LL*d*d;

        bool flag = false;

        for(int i=0;i<n;i++){

            long long e = x1 - a[i];
            long long f = y1 - b[i];

            long long ans2 = 1LL*e*e+1LL*f*f;

            if(ans2<=ans){
                flag=true;
                break;
            }
        }

        if(flag){
            cout << "NO"<<endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}