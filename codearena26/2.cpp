#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    string s;
    int n;
    cin >> n;
    cin >> s;

    if(n % 2 == 0) {
        cout << "NOT POSSIBLE\n";
        return 0;
    }

    int sw = n / 2; 
    set<string> st;

    for(int i = 0; i < n; i++) {
        
        string t = s.substr(0, i) + s.substr(i + 1);

        
        if(t.substr(0, sw) == t.substr(sw)) {
            st.insert(t.substr(0, sw));
        }
    }

    if(st.size() == 0) {
        cout << "NOT POSSIBLE\n";
    }
    else if(st.size() > 1) {
        cout << "NOT UNIQUE\n";
    }
    else {
        cout << *st.begin() << "\n";
    }
}