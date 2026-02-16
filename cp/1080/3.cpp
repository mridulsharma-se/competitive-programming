#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> d(7);

        for(int j = 1; j <= 6; j++) {
            if(a[0] == j)
                d[j] = 0;
            else
                d[j] = 1;
        }

        for(int i = 1; i < n; i++) {

            vector<int> e(7);
            for(int j = 1; j <= 6; j++)
                e[j] = n;

            for(int j = 1; j <= 6; j++) {

                int c;
                if(a[i] == j)
                    c = 0;
                else
                    c = 1;

                for(int k = 1; k <= 6; k++) {

                    if(j != k && j + k != 7) {
                        e[j] = min(e[j], d[k] + c);
                    }
                }
            }

            d = e;
        }

        int r = n;
        for(int j = 1; j <= 6; j++)
            r = min(r, d[j]);

        cout << r << "\n";
    }

    return 0;
}