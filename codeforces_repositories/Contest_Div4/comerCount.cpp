#include <iostream>
using namespace std;

bool can_reach(int x, int y, int k, int m) {
    int X_m = (m + 1) / 2;
    int Y_m = m / 2;
    int max_x_distance = min(X_m * k, x);
    int max_y_distance = min(Y_m * k, y);
    return max_x_distance >= x && max_y_distance >= y;
}

int min_moves(int x, int y, int k) {
    int low = 1, high = 2 * max(x, y) / k + 2;
    while (low < high) {
        int mid = (low + high) / 2;
        if (can_reach(x, y, k, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        cout << min_moves(x, y, k) << endl;
    }
    return 0;
}
