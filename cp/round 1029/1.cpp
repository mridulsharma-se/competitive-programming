#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t; 
    while (t--) {
        int n, x;
        std::cin >> n >> x; 
        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }

        // Check if Yousef can pass
        if (last - first < x) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}