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
        map<long long , long long > mp;
        for(int i=0 ; i< n ; i++){
            mp[a[i]]++;
        }
        if(mp.size()>=3){
            cout<< "NO"<<endl;
        }
        else{
            long long m = mp.begin()->second;
            long long M = mp.rbegin()->second;
            if(m == M){
                cout << "YES" << endl;
        }
            else if(n%2 ==1 && abs(m-M) == 1) {
            cout<< "YES" << endl;
        }
            else{
            cout << "NO" << endl;
        }
        }

        

        
    }
    return 0;
}