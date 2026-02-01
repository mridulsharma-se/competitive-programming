#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // fast IO
    cin.tie(nullptr);

    int t; 
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;  
        string s;
        cin >> s; 
        long long res=0;
        vector<int> freq(26, 0);
        for(int i=0;i<n;i++){
            
        freq[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){

            if(freq[i]>=2){
                res+=2;
            }
            else if(freq[i]==1){
                res+=1;
            }
        }
        cout<<res<<endl;


        
    }


    return 0;
}