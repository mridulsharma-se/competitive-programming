#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string a, b;
        cin >> a >> b;

        int best = 0;

        
        for(int i = 0; i < b.size(); i++){
            int j = i;
            int k = 0;

           
            for(char c : a){
                if(j < b.size() && c == b[j]){
                    j++;
                    k++;
                }
            }

            best = max(best, k);
        }

        cout << a.size() + b.size() - best << "\n";
    }
}