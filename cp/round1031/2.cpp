#include <bits/stdc++.h>
using namespace std;
typedef long long num;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cases;
    cin >> cases;
    
    while (cases--) {
        num width, height, tileA, tileB;
        cin >> width >> height >> tileA >> tileB;
        
        num leftX, lowerY, rightX, upperY;
        cin >> leftX >> lowerY >> rightX >> upperY;
        
        num deltaX = rightX - leftX;
        num deltaY = upperY - lowerY;
        
        if ((deltaX % tileA == 0 && deltaX != 0) || (deltaY % tileB == 0 && deltaY != 0)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}