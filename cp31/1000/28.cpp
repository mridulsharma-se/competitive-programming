#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int cnt=0;
        int minu = INT_MAX;
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                cnt--;

            }
            else{
                cnt++;
            }
            minu = min(minu , cnt);
            
        }
        cout << abs(minu) << "\n";
    }

    return 0;
}