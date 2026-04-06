#include <bits/stdc++.h>
using namespace std;
bool helper(const string& s, int i) {
    int n = s.size();
    n = n - 1;
    int secondStart = n / 2;
    if (i <= secondStart) {
        secondStart++;
    }
    int a = 0, b = secondStart;
    for (int j = 0; j < n / 2; ++j) {
        if (a == i) {
            a++;
        }
        else if (b == i) {
            b++;
        }
        if (s[a] != s[b]) {
            return false;
		}
        a++;
        b++;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int main() {
    /*int n;
    cin >> n;
    while (n-- > 0) {
        solution();
    }*/
    solution();
}
 

 
string findString(const string& s, int i) {
    string res((int)(s.length() - 1) / 2, ' ');
    int a = 0;
    for (int j = 0; j < res.size(); ++j) {
        if (a == i) {
            a++;
		}
        res[j] = s[a];
        a++;
    }
    return res;
}
 
void solution() {
    vector<int> a(26, 0);
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 0) {
        cout << "NOT POSSIBLE\n";
		return;
    }
    for (int i = 0; i < n; ++i) {
		a[s[i] - 'A']++;
    }
 
    char c = ' ';
    for (int i = 0; i < 26; ++i) {
        if (a[i] % 2 != 0) {
			c = i + 'A';
            break;
        }
    }
 
    bool found = false;
    int res = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == c) {
            if (helper(s, i)) {
                if (found) {
                    cout << "NOT UNIQUE\n";
                    return;
                }
                found = true;
                res = i;
            }
        }
    }
 
    if (found) {
        cout << findString(s, res);
    }
    else {
		cout << "NOT POSSIBLE\n";
    }
}
}