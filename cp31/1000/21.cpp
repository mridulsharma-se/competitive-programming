#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b; 
        int n = a.size();
        int m = b.size();
        int longest = 0;
        for(int i=0;i<n;i++ ){
            for(int j=i;j<n;j++){
                string sub = a.substr(i,j-i+1);
                if(b.find(sub)!=string::npos){
                    longest = max(longest , j-i+1);
                }
                
            }

        }
        int ans = n+m-2*longest;
                cout << ans << "\n";
        
    }

    return 0;
}