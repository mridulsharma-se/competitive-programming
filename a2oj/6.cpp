#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3];
    
    // Input the number of presses for each cell
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // For each cell compute total toggles and final light state
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            int toggles = a[i][j];

            if (i > 0) toggles += a[i-1][j];  
            if (i < 2) toggles += a[i+1][j];  
            if (j > 0) toggles += a[i][j-1];  
            if (j < 2) toggles += a[i][j+1];  

          
            cout << (toggles % 2 == 0 ? 1 : 0);
        }
        cout << "\n";
    }

    return 0;
}