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

        cin >> n;
        cin >> s;
        vector<int> a;
        for(int i =0;i<n;i++){
            if(s[i]=='0'){
                a.push_back(i);


            }
            
        }
        cout << a.size() << "\n";
        for(int i =0;i<a.size();i++){
            cout << a[i]+1 << " ";
        }
        cout << "\n";

        
    }

    return 0;
}