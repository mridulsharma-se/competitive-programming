#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }
        unordered_map<int, int> freq;
        for (int num : a) {
            freq[num]++;
        }
        int max_freq = 0;
        int y=0;
        for(auto x:freq){
            max_freq = max(max_freq, x.second);
        }
        for (int x = 1; x <= max_freq; x++) {
            int cnt = 0;
            for (auto &it : freq) {
                if (it.second >= x) cnt++;
            }
            y = max(y, cnt * x);
        }

        cout << y << "\n";
    }
    return 0;
}