#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        string s;
        cin>>s;

        string q="L";   
        q+=s;
        q+='L';         

        int i=0;
        bool d=false;

        while(i < n+1){

           
            if(q[i]=='L'){

                int nxt=-1;

              
                for(int j=m;j>=1;j--){
                    if(i+j>n+1) continue;
                    if(q[i+j]=='L'){
                        nxt=i+j;
                        break;
                    }
                }

               
                if(nxt==-1){
                    for(int j=m;j>=1;j--){
                        if(i+j>n+1) continue;
                        if(q[i+j]=='W'){
                            nxt=i+j;
                            break;
                        }
                    }
                }

                if(nxt==-1){ 
                    d=true;
                    break;
                }

                i=nxt;
            }

           
            else if(q[i]=='W'){

                while(i<=n && q[i]=='W'){
                    if(k==0){
                        d=true;
                        break;
                    }
                    k--;
                    i++;

                    if(q[i]=='C'){
                        d=true;
                        break;
                    }
                }

                if(d) break;
            }

            else{ 
                d=true;
                break;
            }
        }

        if(d)cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}