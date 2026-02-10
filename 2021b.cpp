#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        long long x;
        cin >> n >> x;

        map<long long,long long> freq;

        for(int i=0;i<n;i++){
            long long a;
            cin >> a;
            freq[a]++;
        }

        long long mex = 0;

        while(true){

            if(freq[mex] == 0)
                break;

            
            if(freq[mex] > 1){
                long long extra = freq[mex] - 1;
                freq[mex + x] += extra;
            }

            mex++;
        }

        cout << mex << "\n";
    }
}