#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n,q;
        cin >> n>>q;
        vector<long long>a(n);
        vector<long long>b(q);
        unordered_map<int , int>mpp;
        
        

        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<q;i++){
            cin>>b[i];
        }
        mpp[0]=0;
        for(int i=1;i<n;i++){
            mpp[i]=(n-i)+mpp[i-1];
            
        }

        

        
    }
     return 0;
}