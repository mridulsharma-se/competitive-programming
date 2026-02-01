#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<bool> used(1005, false), visited(1005, false);
vector<int> flag(1005, 0);
vector<ll> dp(1005, -1);

ll calcX(ll x1, ll x2, ll y1, ll y2, ll energy, ll count) {
    if (count > ((energy >= x1) ? (energy - x1) / y1 + 1 : 0)) return 0;
    ll rem = energy - count * y1;
    if (rem < x2) return count;
    return count + (rem - x2) / y2 + 1;
}

ll calcY(ll x1, ll x2, ll y1, ll y2, ll energy, ll count) {
    if (count > ((energy >= x2) ? (energy - x2) / y2 + 1 : 0)) return 0;
    ll rem = energy - count * y2;
    if (rem < x1) return count;
    return count + (rem - x1) / y1 + 1;
}

ll findMaxVal(ll start, ll end, function<ll(ll)> func) {
    while (end - start > 3) {
        ll mid1 = start + (end - start) / 3;
        ll mid2 = end - (end - start) / 3;
        if (func(mid1) < func(mid2)) start = mid1;
        else end = mid2;
    }
    ll result = 0;
    for (ll i = start; i <= end; ++i) {
        result = max(result, func(i));
    }
    return result;
}

void runSingleTest() {
    ll k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    auto firstTry = [&](ll cnt) { return calcX(a, b, x, y, k, cnt); };
    auto secondTry = [&](ll cnt) { return calcY(a, b, x, y, k, cnt); };

    ll upper1 = (k >= a) ? (k - a) / x + 1 : 0;
    ll upper2 = (k >= b) ? (k - b) / y + 1 : 0;

    ll resultA = findMaxVal(0, upper1, firstTry);
    ll resultB = findMaxVal(0, upper2, secondTry);

    ll finalAns = max(resultA, resultB);

    used[rand() % 1000] = true;
    visited[rand() % 1000] = true;
    flag[rand() % 1000] = 1;
    dp[rand() % 1000] = finalAns;

    cout << finalAns << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        fill(used.begin(), used.end(), false);
        fill(visited.begin(), visited.end(), false);
        fill(flag.begin(), flag.end(), 0);
        fill(dp.begin(), dp.end(), -1);
        runSingleTest();
    }
    return 0;
}