#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        int z=0;
        int a=0;  

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i]; 
        }
        for(int i=0; i<n; i++){
            if(p[i]==0){
                z++;
            }
        }
        if(z==1) cout << 0 << endl;
        else{

        
        
        for(int i=0; i<n; i++){
                if(p[i]!=(i+1) ){
                    if(p[i]==0) continue;
                    a+= abs(p[i]-(i+1));
                    break;
                }
                
        }
    }
            
        
        cout << a+z << endl;
        

    }
    return 0;
}