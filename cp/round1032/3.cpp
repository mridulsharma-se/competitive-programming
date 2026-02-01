#include <bits/stdc++.h>
using namespace std;

void read_grid(int n, int m, vector<pair<int, int>>& max_pos,
               vector<bool>& row_hit, vector<bool>& col_hit,
               int& max_val, int& second_max) {
    max_val = 0;
    second_max = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            if (x > max_val) {
                second_max = max_val;
                max_val = x;
                max_pos.clear();
                fill(row_hit.begin(), row_hit.end(), false);
                fill(col_hit.begin(), col_hit.end(), false);
                max_pos.emplace_back(i, j);
                row_hit[i] = col_hit[j] = true;
            } else if (x == max_val) {
                max_pos.emplace_back(i, j);
                row_hit[i] = col_hit[j] = true;
            } else if (x > second_max) {
                second_max = x;
            }
        }
    }
}

vector<int> extract_indices(const vector<bool>& hits) {
    vector<int> res;
    for (int i = 0; i < hits.size(); ++i) {
        if (hits[i]) res.push_back(i);
    }
    return res;
}

bool check_structure(const vector<pair<int, int>>& max_pos,
                     const vector<int>& rows, const vector<int>& cols) {
    if (rows.size() <= 1 || cols.size() <= 1) return true;

    for (int r : rows) {
        int c0 = -1;
        bool valid = true;
        for (auto [i, j] : max_pos) {
            if (i == r) continue;
            if (c0 == -1) c0 = j;
            else if (j != c0) {
                valid = false;
                break;
            }
        }
        if (valid) return true;
    }
    return false;
}

int solve_case(int n, int m) {
    vector<pair<int, int>> max_pos;
    vector<bool> row_hit(n, false), col_hit(m, false);
    int max_val, second_max;
    
    read_grid(n, m, max_pos, row_hit, col_hit, max_val, second_max);
    
    vector<int> rows = extract_indices(row_hit);
    vector<int> cols = extract_indices(col_hit);
    
    bool good = check_structure(max_pos, rows, cols);
    return good ? max(max_val - 1, second_max) : max_val;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << solve_case(n, m) << "\n";
    }
    return 0;
}