#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        int cnt =10;
        int ans=0;
        int k=1;
       for(int i=0;i<n;i+=k){
        cnt--;
        ans++;
        if(cnt==0){
            
            cnt=9;
            k*=10;
        }


        

       }
       cout << ans << endl;
        
    }

    return 0;
}