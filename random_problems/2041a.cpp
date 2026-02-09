#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> arr = {a, b, c, d};
    sort(arr.begin(), arr.end());

    int ans = 1;
    for (int i = 0; i < 4; i++) {
        if (arr[i] != ans) break;
        ans++;
    }

    cout << ans << '\n';
    return 0;
}