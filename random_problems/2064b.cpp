#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

 
    vector<int> freq(n + 1, 0);
    for (int x : a) freq[x]++;

    
    vector<int> len(n, 0);
    if (freq[a[0]] == 1) len[0] = 1;

    for (int i = 1; i < n; i++) {
        if (freq[a[i]] == 1)
            len[i] = len[i - 1] + 1;
        else
            len[i] = 0;
    }

    int mx = *max_element(len.begin(), len.end());

   
    if (mx == 0) {
        cout << 0 << '\n';
        return;
    }

  
    for (int i = 0; i < n; i++) {
        if (len[i] == mx) {
            int l = i - mx + 2;
            int r = i + 1;      
            cout << l << " " << r << '\n';
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}