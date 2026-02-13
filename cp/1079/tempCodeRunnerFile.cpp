#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> p(n), a(n), b(n+1);

        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++){
            b[p[i]] = i;   
        }

        bool f = true;

        for(int i=0;i<n && f;i++){

            if(p[i]==a[i]) continue;

            int s = b[a[i]];
            bool ok = true;

            if(s <= i){
                for(int j=s;j<i;j++){
                    if(a[j]!=a[i] && b[a[j]]==j){
                        ok=false;
                        break;
                    }
                }
            }
            else{
                for(int j=s;j>i;j--){
                    if(a[j]!=a[i] && b[a[j]]==j){
                        ok=false;
                        break;
                    }
                }
            }

            if(!ok) f=false;
        }

        if(f) cout<<"YES" <<endl;
        else cout<<"NO" << endl;
    }
}