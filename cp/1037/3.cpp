#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){ 
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(arr[0]==1){
            cout<<"NO"<<endl;
            continue;
        }
        else cout << "YES" << endl;
    }
    return 0;
}
