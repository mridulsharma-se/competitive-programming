#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int dfs(int box, vector<int>& status, vector<int>& candies,
            vector<vector<int>>& keys, vector<vector<int>>& containedBoxes,
            unordered_set<int>& visited, unordered_set<int>& foundBoxes) {

        if (visited.count(box)) return 0;
        if (status[box] == 0) {
            foundBoxes.insert(box);
            return 0;
        }

        visited.insert(box);
        int candiesCollected = candies[box];

        for (int& insideBox : containedBoxes[box]) {
            candiesCollected += dfs(insideBox, status, candies, keys,
                                    containedBoxes, visited, foundBoxes);
        }

        for (int& boxKey : keys[box]) {
            status[boxKey] = 1;
        }

        return candiesCollected;
    }

    int maxCandies(vector<int>& status, vector<int>& candies,
                   vector<vector<int>>& keys,
                   vector<vector<int>>& containedBoxes,
                   vector<int>& initialBoxes) {

        int candiesCollected = 0;
        unordered_set<int> visited;
        unordered_set<int> foundBoxes;

        for (int& box : initialBoxes) {
            candiesCollected += dfs(box, status, candies, keys, containedBoxes,
                                    visited, foundBoxes);
        }

        // Recheck foundBoxes in case any are now openable
        bool progress = true;
        while (progress) {
            progress = false;
            unordered_set<int> toRemove;
            for (int box : foundBoxes) {
                if (status[box] == 1 && !visited.count(box)) {
                    candiesCollected += dfs(box, status, candies, keys,
                                            containedBoxes, visited, foundBoxes);
                    toRemove.insert(box);
                    progress = true;
                }
            }
            for (int b : toRemove) foundBoxes.erase(b);
        }

        return candiesCollected;
    }
};
int main() {
    Solution sol;

    vector<int> status = {1, 0, 1, 0};
    vector<int> candies = {7, 5, 4, 100};
    vector<vector<int>> keys = {{}, {}, {1}, {}};
    vector<vector<int>> containedBoxes = {{1, 2}, {3}, {}, {}};
    vector<int> initialBoxes = {0};

    int result = sol.maxCandies(status, candies, keys, containedBoxes, initialBoxes);
    cout << "Max candies: " << result << endl;

    return 0;
}