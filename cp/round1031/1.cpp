#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        ll budget, cost1, cost2, div1, div2;
        cin >> budget >> cost1 >> cost2 >> div1 >> div2;
        
        ll max_count1 = (budget >= cost1 ? (budget - cost1) / div1 + 1 : 0);
        
        auto calc_count1 = [&](ll count1) -> ll {
            if (count1 > max_count1) return 0;
            ll remaining = budget - count1 * div1;
            if (remaining < cost2) return count1;
            return count1 + (remaining - cost2) / div2 + 1;
        };
        
        ll left = 0, right = max_count1;
        while (right - left > 3) {
            ll mid1 = left + (right - left) / 3;
            ll mid2 = right - (right - left) / 3;
            if (calc_count1(mid1) < calc_count1(mid2))
                left = mid1;
            else
                right = mid2;
        }
        
        ll result = 0;
        for (ll i = left; i <= right; i++)
            result = max(result, calc_count1(i));
        
        ll max_count2 = (budget >= cost2 ? (budget - cost2) / div2 + 1 : 0);
        
        auto calc_count2 = [&](ll count2) -> ll {
            if (count2 > max_count2) return 0;
            ll remaining = budget - count2 * div2;
            if (remaining < cost1) return count2;
            return count2 + (remaining - cost1) / div1 + 1;
        };
        
        left = 0;
        right = max_count2;
        while (right - left > 3) {
            ll mid1 = left + (right - left) / 3;
            ll mid2 = right - (right - left) / 3;
            if (calc_count2(mid1) < calc_count2(mid2))
                left = mid1;
            else
                right = mid2;
        }
        
        for (ll j = left; j <= right; j++)
            result = max(result, calc_count2(j));
        
        cout << result << "\n";
    }
    
    return 0;
}