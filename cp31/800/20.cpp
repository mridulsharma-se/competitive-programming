#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        

        vector<int> a(n);
        vector<int> b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        b.push_back(n-a[i]+1);


        }
        for(int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
            
        

        

        

}
    
    return 0;
}