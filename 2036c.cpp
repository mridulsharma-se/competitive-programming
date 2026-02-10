#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n;
        cin >> n;

        int len = s.size();

        if(len <= 3){
            while(n--){
                int q, w;
                cin >> q >> w;
                cout << "NO\n";
            }
            continue;
        }

        int cnt = 0;
        for(int i = 0; i + 3 < len; i++){
            if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                cnt++;
        }

        while(n--){
            int q, w;
            cin >> q >> w;
            q--;  

            for(int i = q - 3; i <= q; i++){
                if(i >= 0 && i + 3 < len){
                    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                        cnt--;
                }
            }

            s[q] = char(w + '0');


            for(int i = q - 3; i <= q; i++){
                if(i >= 0 && i + 3 < len){
                    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                        cnt++;
                }
            }

            cout << (cnt > 0 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}