#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> arr(n, vector<char>(4));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> arr[i][j];
            }
        }

        vector<int> ans;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < 4; j++) {
                if (arr[i][j] == '#') {
                    ans.push_back(j+1);
                }
            }
        }

        // Output the answer for the current test case
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << endl; // Ensures each test case result is on a new line
    }
    return 0;
}
