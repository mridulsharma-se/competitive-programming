#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s ;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Y'){
                cnt++;
            }
        }
        if (cnt>=2){
            cout << " NO";

        }
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
