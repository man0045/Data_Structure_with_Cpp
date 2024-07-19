#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        if (n % 2 == 0) {
            cout << (n / 2) + 1 << endl;
        } else {
            cout << (n / 2) + 0 << endl;
        }
    }

    return 0;
}
