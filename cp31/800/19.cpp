#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int pos = 0, neg = 0, ops = 0;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];  
            if (a[i] == 1) pos++;
            else if (a[i] == -1) neg++;
        }

        

            while(!(pos>=neg && neg%2 ==0)){
                neg --;
                pos ++;
                ops++;
            }
            cout << ops << endl;

    
}
return 0;
}