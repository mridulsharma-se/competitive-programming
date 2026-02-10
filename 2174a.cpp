#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s, t;
        cin >> s;
        cin >> t;

        bool flag = true;
        vector<int> freq(26, 0);

        for (auto x : t) {
            freq[x - 'a']++;
        }

        for (auto q : s) {
            freq[q - 'a']--;
            if (freq[q - 'a'] < 0) {
                flag = false;
            }
        }
        int j=0;

        

        if (!flag) {
            cout << "Impossible\n";
        } else {
            for (int i = 0; i < 26; i++) {
                while(j<s.size()){
                    if(s[j]>char('a' + i)){
                        break;
                    }
                    else {
                        cout << s[j];
                        j++;
                    }
                }
                
                while (freq[i] > 0) {
                    cout << char('a' + i );
                    freq[i]--;
                }
                
            }
            cout << '\n';
        }
    }
    return 0;
}