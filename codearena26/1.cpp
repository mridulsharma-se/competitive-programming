#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <numeric>
#include <bitset>
#include <stack>
#include <set>
#include <numeric>
#include <queue>

#define all(a) a.begin(), a.end()
#define ll int64_t
#define ull uint64_t
#define vi vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define alice cout << "Alice\n"
#define bob cout << "Bob\n"

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

using namespace std;



int main() {
    string s;
    int n;
    vector<int>mp(26,0);
    vector<int>mpp(26,0);
    cin>>n;
    cin>>s;
    bool flag=true;
    char c ;
    int sw = (n/2)+1;
    for(int i=0;i<=sw;i++){
        mp[s[i]-'A']++;

    }
    
    for(int i=0;i<26;i++){
        if(mp[i]>2){
            flag= false;
        }
    }
    for(int i=0;i<sw;i++){
        mp[s[i]-'A']++;

    }
    for(int i=0;i<n;i++){
        mpp[s[i]-'A']++;

    }
    for(int i=0;i<26;i++){
        if(mpp[i]==1 || mpp[i]>2){
            c=(i+'A');
            break;
        }
    }
    string req;
    

    
    if(n%2==0){
        cout << "NOT POSSIBLE" << endl;
    }
    else if(flag==false){
        cout << "NOT UNIQUE"<< endl;
    }
    else {
        for(int i=0;i<sw;i++){
            if(s[i]==c) continue;
            else {
                req+=s[i];
            }

        }
        cout << req ;
        

    }
    
        
    
    
}

