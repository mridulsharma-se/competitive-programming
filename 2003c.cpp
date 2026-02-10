#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> f(26,0);

        for(char c:s){
            f[c-'a']++;
        }

        vector<pair<int,int>> p;

        for(int i=0;i<26;i++){
            if(f[i]){
                p.push_back({f[i],i});
            }
        }

        sort(p.rbegin(),p.rend()); 

        string ans(n,' ');
        int idx=0;

        for(auto x:p){
            int cnt=x.first;
            char c='a'+x.second;

            while(cnt--){
                if(idx>=n) idx=1;
                ans[idx]=c;
                idx+=2;
            }
        }

        cout<<ans<<endl;
    }
}