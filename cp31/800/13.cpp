#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>b,c;
        int maxs=*max_element(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]<maxs) b.push_back(a[i]);
            else c.push_back(a[i]);
            
        }
        if(b.size()<1){
            cout<<-1 << endl;
        }
        else {
            cout << b.size() << " " << c.size() << endl;
            for(auto i : b){
                cout << i << " ";
            }
            for(auto i: c){
                cout << i << " ";
                
            }
            cout << endl;
            

        }
        

    }
    return 0;
}