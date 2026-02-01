#include <iostream>
using namespace std;

string winner(int n) {
    int current = n;
    for (int turn = 0; turn < 10; ++turn) {
        if(current%3==0){
            return "Second";

        }
        else return "First";
    }

        
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << winner(n) << '\n';
    }
    return 0;
}