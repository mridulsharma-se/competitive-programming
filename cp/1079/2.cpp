#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> p(n+1), a(n+1), pos(n+1), vis(n+1,0);

        for(int i=1;i<=n;i++){
            cin>>p[i];
            pos[p[i]] = i;
        }

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int last = 0;  
        bool ok = true;

        for(int i=1;i<=n;i++){

            if(i>1 && a[i]==a[i-1]) continue;

            if(vis[a[i]]){   
                ok=false;
                break;
            }

            vis[a[i]] = 1;

            int cur = pos[a[i]];

            if(cur < last){  
                ok=false;
                break;
            }

            last = cur;
        }

        if(ok) cout<<"YES " << endl;
        else cout<<"NO" << endl;
    }
}