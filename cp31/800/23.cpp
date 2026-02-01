#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
            if((a + (d-b)) < c || d-b<0) cout << -1 << endl;
            
            else if ( (a + (d-b)) == c) cout << d-b << endl;
            else  {
                cout << 2*d-2*b+a-c << endl;}
            

            
        
       
    }

    return 0;
}