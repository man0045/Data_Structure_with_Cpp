#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> max_subsequence_length(int t, vector<pair<pair<int, int>, pair<string, string>>> test_cases) {
    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first.first;
        int m = test_cases[i].first.second;
        string a = test_cases[i].second.first;
        string b = test_cases[i].second.second;

        int j = 0; // Index for string b
        int max_length = 0;

        for (int k = 0; k < n; ++k) {
            while (j < m && b[j] != a[k]) {
                j++;
            }
            if (j < m && b[j] == a[k]) {
                max_length++;
                j++;
            }
        }

        results.push_back(max_length);
    }

    return results;
}

int main() {
    int t;
    cin >> t;

    vector<pair<pair<int, int>, pair<string, string>>> test_cases(t);
    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        string a, b;
        
        cin >> a;
        cin >> b;
        test_cases[i] = make_pair(make_pair(n, m), make_pair(a, b));
    }

    vector<int> results = max_subsequence_length(t, test_cases);
    for (int i = 0; i < t; ++i) {
        cout <<results[i] << endl;
    }

    return 0;
}
