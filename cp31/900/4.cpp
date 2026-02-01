#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        long long a, b;
        int n;
        cin >> a >> b >> n;

        vector<long long> tools(n);
        for (int i = 0; i < n; i++) {
            cin >> tools[i];
        }

       
        long long sum =0;
        sum+=b;
        for(int i=0;i<n;i++){
            sum+=min(a-1,tools[i]);
    }
        cout << sum << endl;
        
    }

    return 0;
}