#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        int od=0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];    

}
    for(int i=0 ; i< n ;i++){
        if(a[i]%2==1){
            od++;

        }
    }
        if(od % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
}
return 0;
}