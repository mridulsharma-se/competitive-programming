#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long x;
        cin >> x;

        int c = 0;

        for(long long y = x; y <= x + 81; y++){
            long long z = y;
            int s = 0;

            while(z){
                s += z % 10;
                z /= 10;
            }

            if(y - s == x) c++;
        }

        cout << c << endl;
    }
}