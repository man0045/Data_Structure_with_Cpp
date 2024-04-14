#include <iostream>
#include <algorithm>
using namespace std;

int min_height(int a, int b, int c) {
    if (a + b + c == 1)
        return 0;  // If there is only one vertex, the height is 0
    int total_vertices = a + b + c;
    return max(2 * a + b - c, total_vertices % 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << min_height(a, b, c) << endl;
    }
    return 0;
}
