#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int x;
        cin >> x;
        int minu=10;
        string s = to_string(x);
        for(int i=0;i<s.size();i++){
            int digit = s[i] - '0';
            minu = min(minu ,digit );

        }
        cout << minu  << endl;
    }
    return 0;
}