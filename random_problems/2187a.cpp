#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ff first
#define ss second
#define set_bits __builtin_popcountll

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

template<typename T, typename V> ostream& operator<<(ostream &os, const pair<T, V> &p) { return os << "{" << p.ff << "," << p.ss << "}"; }
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << "["; for (int i = 0; i < sz(v); ++i) os << v[i] << (i == sz(v) - 1 ? "" : ", "); return os << "]"; }
template<typename T> ostream& operator<<(ostream &os, const set<T> &v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) os << *it << (next(it) == v.end() ? "" : ", "); return os << "]"; }
template<typename T, typename V> ostream& operator<<(ostream &os, const map<T, V> &v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) os << *it << (next(it) == v.end() ? "" : ", "); return os << "]"; }

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
    Mint(ll _val = 0) : val((_val % MOD + MOD) % MOD) {}
    Mint operator+(const Mint& o) const { return Mint(val + o.val); }
    Mint operator-(const Mint& o) const { return Mint(val - o.val + MOD); }
    Mint operator*(const Mint& o) const { return Mint(val * o.val); }
    Mint operator/(const Mint& o) const { return *this * Mint(mminvprime(o.val)); }
    Mint& operator+=(const Mint& o) { return *this = *this + o; }
    Mint& operator-=(const Mint& o) { return *this = *this - o; }
    Mint& operator*=(const Mint& o) { return *this = *this * o; }
    Mint& operator/=(const Mint& o) { return *this = *this / o; }
    bool operator==(const Mint& o) const { return val == o.val; }
    friend ostream& operator<<(ostream& os, const Mint& m) { return os << m.val; }
};

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b = a;
    sort(all(b));

    if(a == b){
        cout << -1 << "\n";
        return;
    }

    int ans = INT_MAX;

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            ans = min(ans, max(a[i] - b[0], b[n-1] - a[i]));
        }
    }

    cout << ans << "\n";
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}