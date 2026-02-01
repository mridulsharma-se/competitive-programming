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
        string s;
        cin >> s;
        int countB=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                countB++;
            }


        }
        

        if(s[n-1]=='A' && s[n-2]=='A'  || s[0]=='A'&&s[n-1]=='A' || n<=1 && s[0]=='A' || s[0]=='A'&&s[n-2]=='A'&& countB<=1){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
    return 0;
}