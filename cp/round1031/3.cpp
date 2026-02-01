#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t a;
    cin >> a;
    while (a--) {
        int32_t b, c, d;
        cin >> b >> c >> d;
        vector<string> e(b);
        for (auto& f : e) cin >> f;
        
        vector<vector<int32_t>> h(b + 1, vector<int32_t>(c + 1, 0));
        int32_t i = 0;
        
        // Calculate prefix sums
        for (int32_t j = 0; j < b; ++j) {
            for (int32_t k = 0; k < c; ++k) {
                int32_t l = (e[j][k] == 'g');
                i += l;
                h[j + 1][k + 1] = h[j + 1][k] + h[j][k + 1] - h[j][k] + l;
            }
        }

        auto m = [&](int32_t p, int32_t q, int32_t r, int32_t s) -> int32_t {
            if (p > r || q > s) return 0;
            return h[r + 1][s + 1] - h[p][s + 1] - h[r + 1][q] + h[p][q];
        };

        int32_t n = INT_MAX;
        const int32_t o = d - 1;

        for (int32_t p = 0; p < b; ++p) {
            for (int32_t q = 0; q < c; ++q) {
                if (e[p][q] == '.') {
                    int32_t r = max(0, p - o);
                    int32_t s = max(0, q - o);
                    int32_t t = min(b - 1, p + o);
                    int32_t u = min(c - 1, q + o);
                    n = min(n, m(r, s, t, u));
                }
            }
        }
        cout << i - n << '\n';
    }
    return 0;
}