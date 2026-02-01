#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = "";

        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;

            if (s.empty()) {
                s = x;
            } else {
                if (x + s < s + x) {
                    s = x + s;   
                } else {
                    s = s + x;   
                }
            }
        }

        cout << s << '\n';
    }

    return 0;
}