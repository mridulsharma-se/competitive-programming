#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        bool z= false;
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                z=true;
            }

        }
        if(!z){
                cout << 1 << endl;
                cout << 1 <<" "<< n<< endl;
                
            }
            else if (a[n]==0){
                cout << 3<< endl;
                cout << n-1 <<" "<< n<< endl;
                cout << 1 <<" "<< n-2<< endl;
                cout<< 1 << " " << 2 << endl;
            }
            else {
                for(int i=0;i<n;i++){
                    cout<<1<<" "<<2<< endl;
                }
            }

    }
    return 0;
}