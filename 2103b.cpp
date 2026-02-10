#include <bits/stdc++.h>
using namespace std;
string reverse(string s){

}

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
        vector<int> a;
        int c1=0,c0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                c0++;

            }
            else{
                a.push_back(c0);
                c0=0;
            }
            if(s[i]=='1'){
                c1++;
            }
            else{
                a.push_back(c1);
                c1=0;
            }


        }
        for(int i=0;i<a.size();i++){
            if(i%2==0){
                

            }
        }
        
    }

    return 0;
}