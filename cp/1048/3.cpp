#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        long long k, x;
        cin >> k >> x;
        long long p = (1LL << k); 
        long long q = p;
        vector<long long> v;
        if(x<p){
            while(p<2*x){
                v.push_back(2);
                q/=2;
                p = p+q;

            }
            v.push_back(1);
        }
        else if(p==x){
            cout << 0 << endl;
            continue;
        }
        else {
            while(q > 1 && p + q / 2 != x){
                p/=2;
                q+=p;
                v.push_back(1);
            }
            v.push_back(2);
        }
        if(v.size()>0) cout << v.size() << endl;
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;

       
    }

    return 0;
}