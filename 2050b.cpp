#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        long long sum = 0;
        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        if(sum % n != 0){
            cout << "NO" << endl;
        } else {
            long long avg = sum / n;

            for(int i = 0; i + 2 < n; i++){
                if(a[i] < avg){
                    a[i+2] = a[i+2] - (avg - a[i]);
                    a[i] = avg;
                } else {
                    a[i+2] = a[i+2] + (a[i] - avg);
                    a[i]=avg;
                }
            }

            bool flag = true;
            for(int i = 0; i < n; i++){
                if(a[i]!=avg){
                    flag= false;
                }
            }

            if(flag){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}