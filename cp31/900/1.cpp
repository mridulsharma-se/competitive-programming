#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, e, f;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;

        set<pair<int, int>> king, queen;

        for (int i = 0; i < 4; i++) {
            king.insert({c + a * dx[i], d + b * dy[i]});
            king.insert({c + b * dx[i], d + a * dy[i]});

            queen.insert({e + a * dx[i], f + b * dy[i]});
            queen.insert({e + b * dx[i], f + a * dy[i]});
        }

        int ans = 0;
        for (auto it : king) {
            if (queen.find(it) != queen.end()) {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}