#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {


    int n, m;
    cin >> n >> m;
        int sums=0;
    set<int> s;


    for (int i = 0; i < n; i++) {
        int li;
        cin >> li;
        sums+=li;

        for (int j = 0; j < li; j++) {
            int x;
            cin >> x;
            s.insert(x);
        }
    }

    bool allPresent = true;
    for (int i = 1; i <= m; i++) {
        if (s.find(i) == s.end()) {
            allPresent = false;
            break;
        }
    }
    if (allPresent && sums >= 2*m && n >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}


    

    return 0;
}