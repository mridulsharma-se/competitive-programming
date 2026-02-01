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
        
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        int m=n;
        int c=1;

      
        for(int i=0;i<n;i++){
            if(p[i]<3){
                cout << m << " ";
                m--;
            }
            else {
                cout << c << " ";
                c++;
                
            }
            

        }
        cout << endl;
    }

    return 0;
}