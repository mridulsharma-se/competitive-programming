#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;            

        int cnt = 0;
        for(int i = 1; i < s.size() - 1; i++){
            if(s[i] == 'u' ){
                if(s[i-1] == 'u'){
                    s[i-1]='s';
                    cnt++;
                }
                if(s[i+1] == 'u'){
                    s[i+1]='s';
                    cnt++;
                }
                
                
            }
            


            
            
        }
        if(s[s.size()-1]=='u'){
            cnt++;
        }
        if(s[0]=='u'){
            cnt++;
        }
        
        
        cout << cnt << endl;
    }
    return 0;
}