#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int maxi=0;
        int cnt=0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
    }
        for(int i = 0; i < n; i++) {
            if(a[i]==0) cnt++;
            else {
                maxi = max(maxi, cnt);
                cnt = 0;
            }
        }
        maxi = max(maxi, cnt);
        cout << maxi << endl;
            
       



    
    
}
return 0;
}