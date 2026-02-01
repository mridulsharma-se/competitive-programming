#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T; 

    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        
        long long ans = 0;
        vector<int> count(26, 0);
        int distinct = 0;

        for (char c : s) {
            if (count[c - 'a'] == 0) {
                count[c - 'a'] = 1;
                distinct++;
            }
            ans += distinct; 
        }

        cout << ans << '\n';
    }
    return 0;
}