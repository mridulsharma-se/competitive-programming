#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of the permutation
        cout << 1; // First element is always 1
        for (int i = n; i >= 2; i--) {
            cout << " " << i; // Print numbers from n down to 2
        }
        cout << endl; // New line for each test case
    }
    return 0;
}