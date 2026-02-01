#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

       
        string doubled = s + s;

        int ans = 0;
        int last = -1;

        for (int i = 0; i < 2 * n; i++) {
            if(doubled[0]=='g'){
                ans=0;
                break;
            }
            if (doubled[i] == 'g') {
                if (last != -1) {
                    ans = max(ans, i - last);
                }
                last = -1; 
            }
            if (doubled[i] == c && last == -1) {
                last = i; 
            }
        }

        cout << ans << "\n";
    }

    return 0;
}