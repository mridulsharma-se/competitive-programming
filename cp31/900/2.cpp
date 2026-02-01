#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        int n, k;
        int odd=0;
        cin >> n >> k;

        string s;
        cin >> s;
        vector<int> mp(26, 0);
        for (char c : s) {

            mp[c - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(mp[i]%2==1) {
                odd++;
                
            }
            
            

            


        }
        if(odd<=k+1 ) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }



       
        

        
    }

    return 0;
}