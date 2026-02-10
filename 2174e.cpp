#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;

        vector<string> a, b, c;
        a = {"12", "21"};
        b = {"123", "132", "213", "231", "312", "321"};
        c = {
            "1234","1243","1324","1342","1423","1432",
            "2134","2143","2314","2341","2413","2431",
            "3124","3142","3214","3241","3412","3421",
            "4123","4132","4213","4231","4312","4321"
        };

        string x, y;
        if (n == 12) {
            x = a[j - 1];
            y = a[k - 1];
        } 
        else if (n == 123) {
            x = b[j - 1];
            y = b[k - 1];
        } 
        else {
            x = c[j - 1];
            y = c[k - 1];
        }

        int cnt = 0;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == y[i]) {
                cnt++;
            }
        }

        cout << cnt << "A" << (int)x.size() - cnt << "B\n";
    }
    return 0;
}