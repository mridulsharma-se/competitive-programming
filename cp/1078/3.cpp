#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n); 

        while(k--){
            string s;
            cin>>s;
            for(int i=0;i<n;i++)
                a[i] |= 1<<(s[i]-'a');
        }

        int d=n;

        for(int x=1;x<=n;x++){
            if(n%x) continue;

            bool ok=1;

            for(int r=0;r<x && ok;r++){
                int m=(1<<26)-1;

                for(int i=r;i<n;i+=x){
                    m &= a[i];
                    if(!m){ ok=0; break; }
                }
            }

            if(ok){ d=x; break; }
        }

        string ans(n,'a');

        for(int r=0;r<d;r++){
            int m=(1<<26)-1;

            for(int i=r;i<n;i+=d)
                m &= a[i];

            char c='a'+__builtin_ctz(m);

            for(int i=r;i<n;i+=d)
                ans[i]=c;
        }

        cout<<ans<<"\n";
    }
}