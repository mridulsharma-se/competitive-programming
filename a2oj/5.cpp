#include <bits/stdc++.h>
using namespace std;

bool distinct(int y) {
    string s = to_string(y);
    return s[0] != s[1] && s[0] != s[2] && s[0] != s[3] &&
           s[1] != s[2] && s[1] != s[3] &&
           s[2] != s[3];
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (distinct(y)) {
            cout << y << "\n";
            break;
        }
    }

    return 0;
}