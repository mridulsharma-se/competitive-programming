#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  
    cin >> t;  

    while (t--) {
        long long a, b;  
        cin >> a >> b;  
        long long ans = LLONG_MAX;
        long long  q=0;
        if(b==1) q=1;
        for(int i=q;i<30;i++){
            long long x = a;
            long long y = b+i;
            long long ops = i;
            while(x>0){
                x = x/(y);
                ops++;
            }
            if(ops<ans) ans = ops;
        }
        cout << ans << "\n";
        
    }

    return 0;
}