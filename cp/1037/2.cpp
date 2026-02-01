#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        int cnt=0;
        int sum=0;
        int i=0;
        cin >> n >> k;
        vector<int> arr(n);
        for(int idx = 0; idx < n; idx++) cin >> arr[idx];  
        while(i<n){
            if(i+k>n){
                break;  
            }
            sum = 0;
            for(int j=i ; j < i+k; j++){
                sum =sum + arr[j];
            }
            if(sum>0){
                i++;
                

                continue;
            }
            else{
                 cnt++;
                 i=i+k+1;
                 
            }
        }
        cout<<cnt << endl;
        

    }
    return 0;

}
