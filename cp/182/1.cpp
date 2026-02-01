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
        int sum =0;
        int pre=0;
        int mid=0;
        int suf=0;
       

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
            
        }
        for ( int i = 0; i < n; i++) {
            sum += a[i]; 
        }
        if(sum%3!=0){
            cout << 0 << " " << 0 << endl;
        }
        else {
            for(int l=0; l<n; l++){
                for(int r=l+1 ; r<n; r++){
                    
                    
                    }
                
                }
            }
        
        
        

        
    }

    return 0;
}