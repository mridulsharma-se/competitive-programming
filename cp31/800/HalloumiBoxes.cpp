#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long > b = a;
        sort(b.begin(), b.end());
        if(a==b || k>1){
            cout << "YES" << endl;
        }
        else{
            cout<<"NO" << endl;
        }
        }
        return 0;
    }
    