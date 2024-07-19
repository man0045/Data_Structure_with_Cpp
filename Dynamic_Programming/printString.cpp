#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> dp;

void PrintLcs(string s, string t) {
    int n = s.size();
    int m = t.size();
    
    // Initialize the dp vector with proper dimensions
    dp = vector<vector<int>>(n + 1, vector<int>(m + 1, 0));

    // Fill dp table
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            if (s[i] == t[j]) {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }

    // Reconstruct LCS from dp table
    int i = 0, j = 0;
    string lcs = "";
    
    while (i < n && j < m) {
        if (s[i] == t[j]) {
            lcs += s[i];
            i++;
            j++;
        } else if (dp[i + 1][j] >= dp[i][j + 1]) {
            i++;
        } else {
            j++;
        }
    }
    
    cout << lcs;
}

int main() {
    string s1 = "mannuchaur";
    string s2 = "mannioflke"; 
    PrintLcs(s1, s2);
    return 0;
}
