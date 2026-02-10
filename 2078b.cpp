#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k%2==0){
            for(int i=0;i<n;i++){
                if(i!=n-2) cout << n-1 << " ";
                else cout << n << " ";
            }
            

        }
        else {
            for(int i=0;i<n-1;i++){
                cout << n << " " ;
            }
            cout << n-1 << " ";
        }
        cout << endl;
    }
}