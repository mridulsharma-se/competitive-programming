#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   
    vector<long long> fib(11);
    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i <= 10; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
      
        string result;
        for (int i = 0; i < m; ++i) {
            long long w, l, h;
            cin >> w >> l >> h;
            

            long long min_dim = min({w, l, h});
            long long max_dim = max({w, l, h});
            

            bool can_fit = (min_dim >= fib[n] && max_dim >= fib[n] + fib[n-1]);
            result += (can_fit ? '1' : '0');
        }
        
        cout << result << '\n';
    }
    
    return 0;
}