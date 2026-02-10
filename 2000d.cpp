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

        long long sum=0;
        vector<long long> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        string s;
        cin>>s;

        int i=0,j=n-1;
        long long ans=0;

        while(i<j){

            while(i<j && s[i]!='L'){ 
                sum-=a[i];
                i++;
            }

            while(i<j && s[j]!='R'){ 
                sum-=a[j];
                j--;
            }

            if(i<j){
                ans+=sum;
                sum-=a[i];
                sum-=a[j];
                i++;
                j--;
            }
        }

        cout<<ans<<endl;
    }
}