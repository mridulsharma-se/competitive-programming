#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int cnt=0; 
        int n,m;
        cin >> n>>m;

        vector<vector<int>> a(n, vector<int>(m, 0));
        vector<pair<int,int>>p;     

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){ 
                cin >> a[i][j];
                if(a[i][j]==1){
                    cnt++;
                    p.push_back({i,j});
                }
            }
        }

        int x = cnt/2;   
        int b = (cnt+1)/2; 
        int ans=0;

        if(p.empty()){
            cout << "\n";
            continue;
        }

        int l=p[0].first;

        string s=""; 

        sort(p.begin(),p.end());

        for(int i=0;i<p.size();i++){
            
            int r=p[i].second;

            if(ans==x){
                break;
            }

            if(l!=p[i].first){
                l = p[i].first;
            }
            else {
                ans++;
                s+='R'; 
            }
        }

        cout<<s<<"\n";
    }
    return 0;
}