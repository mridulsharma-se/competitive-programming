#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=true;
        int minu=INT_MAX;
        
        
        for(int i=1;i<n;i++){
            
                int minu= min(a[i-1],minu);
                int b=minu-a[i];
                if(abs(b)>minu) flag=false;

            

        }
        if(!flag) cout << "NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
