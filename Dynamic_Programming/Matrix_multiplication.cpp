#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int f(int i, int j, vector<int> &arr) {
    if (i == j || i + 1 == j) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    int mini = INT_MAX;
    for (int k = i + 1; k < j; k++) {
        mini = min(mini, f(i, k, arr) + f(k, j, arr) + arr[i] * arr[j] * arr[k]);
    }
    return dp[i][j] = mini;
}

int main() {
    int n;
    cout << "Enter the number of input array" << endl;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dp.clear();
    dp.resize(n + 1, vector<int>(n + 1, -1));

    cout << f(0, n - 1, arr) << endl;

    return 0;
}
