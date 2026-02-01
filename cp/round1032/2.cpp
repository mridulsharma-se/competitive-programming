#include <bits/stdc++.h>
using namespace std;

bool has_repeated_center(int n, const string& s) {
    int cnt[26] = {0};
    for (char ch : s) cnt[ch - 'a']++;

    bool seen[26] = {false};
    for (int i = 0; i < n; ++i) {
        int idx = s[i] - 'a';
        cnt[idx]--;

        if (i > 0 && i < n - 1) {
            if (seen[idx] || cnt[idx] > 0)
                return true;
        }
        seen[idx] = true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << (has_repeated_center(n, s) ? "Yes\n" : "No\n");
    }
    return 0;
}