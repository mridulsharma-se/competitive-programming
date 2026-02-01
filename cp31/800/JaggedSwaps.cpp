#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[0] !=1 || a[i]>a[i+1]){
                cout << "NO" << endl;
                break;

            }
            else {
                cout<<"YES" << endl;
                break;
            
        }
        
    }}
    return 0;
}