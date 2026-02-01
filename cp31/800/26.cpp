#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
    int T;
    cin >> T;

    while (T--) {
        int a;
        cin >> a;

        
        vector<int> v(a);
        int res=0;
        bool flag = false;
        for (int i = 0; i < a; i++) {
            cin >> v[i];
        }
        for(int i=0 ;i<a;i++){
            res = gcd(res, v[i]);
            
            if(res%i+1 == 0) {
                flag = true;
            }


            
            

        }
        if(res<=2 && flag==true) cout << "YES" << endl;
        else cout << "NO" << endl;
        

    }

    return 0;
}