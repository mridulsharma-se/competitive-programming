#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int a,b,c;
        cin >> a >> b >> c;
        if(c%2==0){
            if(a>b){
                cout<< "first" << endl;
            }
            else {
                cout<< "second" << endl;
           

            }
        }
         else if(c%2==1){ 
            if(a>=b){
                cout<< "first" << endl;
            }
            else {
                cout<< "second" << endl;
            }
        }
    }
    return 0;
}
    

