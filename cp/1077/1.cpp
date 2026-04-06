#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) { cerr << t; if (sizeof...(v)) cerr << ", "; _print(v...); }

ll expo(ll a, ll b, ll mod = MOD) {
    ll res = 1; a %= mod;
    while (b > 0) { if (b & 1) res = (res * a) % mod; a = (a * a) % mod; b >>= 1; }
    return res;
}

ll mminvprime(ll a, ll b = MOD) { return expo(a, b - 2, b); }

struct Mint {
    ll val;
    Mint(ll _val = 0) : val(_val % MOD) { if (val < 0) val += MOD; }
    Mint operator+(const Mint& other) const { return Mint(val + other.val); }
    Mint operator-(const Mint& other) const { return Mint(val - other.val + MOD); }
    Mint operator*(const Mint& other) const { return Mint(val * other.val); }
    Mint operator/(const Mint& other) const { return *this * Mint(mminvprime(other.val)); }
    bool operator==(const Mint& other) const { return val == other.val; }
    friend ostream& operator<<(ostream& os, const Mint& m) { return os << m.val; }
};

void solve() {
    
}

int main() {
    fastio();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}