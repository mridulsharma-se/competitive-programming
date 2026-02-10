#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        int on=0;
        int ze=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                on++;
            }
            else ze++;
            
        }
        
        if(on==k || ze==n || on<k){
            cout << "Alice"<<endl;
            continue;
        }
        
        else {
            if(k>n/2){
                cout << "Alice"<<endl;

            }
            else{
                cout << "Bob"<<endl;
            }
        }
    }
    return 0;
}
