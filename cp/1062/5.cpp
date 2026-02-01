#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;  

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x; 

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long sum = 0;

        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        long long avg = sum/n;
        if()

        cout << "\n";
    }

    return 0;
}