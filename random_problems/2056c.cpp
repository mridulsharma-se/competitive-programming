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

        int x = 1;
        for (int i = 0; i < n; i++) {
            if(i<=1||i==n-1){
                cout << "1"<<" ";
            }
            else {
                cout << i << " ";

            }
        }
        cout << "\n";
    }
    return 0;
}