#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<long long>a(n);
        long long odd=0;
        long long even=0;
        long long total=0;
        long long maxi =INT_MIN;
        for(int i=0;i<n;i++){
            cin >> a[i];
            total +=a[i];
            maxi = max(maxi,a[i]);
            a[i]%2==0 ? even++ : odd++;
        }
        if(odd==even && odd ==1) cout << total << endl; 
        else if(even>0 && odd >0){
        cout << total  -(odd-1) << endl;
        }
        else {
            cout << maxi << endl;
            
        }

        


        
        

        


    }
    return 0;
}

    