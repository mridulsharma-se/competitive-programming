#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag=false; 
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'&&i+1<n && i+2<n) {
               
                flag=true;
                break;
                

            }
            else if(s[i]=='.'){
                sum++;
            }
        }
        if(flag){
            cout<<2<<endl;
        }
        else cout<<sum<<endl;

      
    }
    return 0;
}
            


            
 