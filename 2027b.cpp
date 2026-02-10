#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long minu = INT_MIN;   

        for(int i = 0; i < n; i++){
            long long cnt = 0;
            for(int j = i; j < n; j++){
                if(a[j] <= a[i]){
                    cnt++;
                }
            }
            
            minu = max(minu, cnt);
        }

        cout <<  n-minu << endl;
    }

    return 0;
}