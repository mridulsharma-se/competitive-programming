#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    vector<int>d;
    d.push_back(0);
    d.push_back(x);
    for(int i=0;i<n;i++){
        d.push_back(a[i]);
        sort(d.begin(),d.end());
        for(int j=0;j<d.size();j++){
            int maxi = abs[d[j]-d[j+1]];
        }
    }
    
}