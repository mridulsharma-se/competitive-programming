#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int xo=0;


        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            xo ^= a[i];
        }
        if(n%2 == 0) {
            if(xo==0){
                cout << 0 << endl;

            }
            else cout << -1 << endl;
        }
        else{ 
            cout << xo << endl;
            
        }
        
        
        }
    
        return 0;
    }


   