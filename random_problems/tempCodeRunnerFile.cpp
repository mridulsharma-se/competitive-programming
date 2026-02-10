#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        vector<int>a(n,-1);

       
        for(int i=0;i<y;i++) a[i]=1;

      
        for(int i=x-1;i<n;i++) a[i]=1;

        for(int v:a) cout<<v<<" ";
        cout<<"\n";
    }
}