#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<char>> a(n, vector<char>(m));
        vector<vector<char>> b(n, vector<char>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>b[i][j];
            }
        }

        string s1="120";
        string s2="201";

        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){

                if(a[i][j]==b[i][j]) continue;

                if(s1[a[i][j]-'0']==b[i][j]){
                    a[i][j]=s1[a[i][j]-'0'];
                    a[i+1][j+1]=s1[a[i+1][j+1]-'0'];
                    a[i][j+1]=s2[a[i][j+1]-'0'];
                    a[i+1][j]=s2[a[i+1][j]-'0'];
                }
                else{
                    a[i][j]=s2[a[i][j]-'0'];
                    a[i+1][j+1]=s2[a[i+1][j+1]-'0'];
                    a[i][j+1]=s1[a[i][j+1]-'0'];
                    a[i+1][j]=s1[a[i+1][j]-'0'];
                }
            }
        }

        bool ok=true;

        for(int j=0;j<m;j++){
            if(a[n-1][j]!=b[n-1][j]) ok=false;
        }

        for(int i=0;i<n;i++){
            if(a[i][m-1]!=b[i][m-1]) ok=false;
        }

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
}