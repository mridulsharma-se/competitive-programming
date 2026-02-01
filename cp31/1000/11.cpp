#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    long long d;
    cin >> n >> d;

    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end()); 

    int wins = 0, used = 0;

    for (int i = n - 1; i >= 0; i--) {
        long long need = d / p[i] + 1; 
        if (used + need <= n) {
            wins++;
            used += need;
        } else break;
    }

    cout << wins << "\n";
    return 0;
}