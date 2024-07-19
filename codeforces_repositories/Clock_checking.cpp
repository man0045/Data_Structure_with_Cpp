#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Ensure that a < b and c < d
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);

        // Check if c and d are within the range of a and b
        bool intersect = (c > a && c < b) || (d > a && d < b);

        if (intersect) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
