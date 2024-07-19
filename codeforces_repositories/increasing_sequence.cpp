#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> sequence;
        while (n > 0) {
            sequence.push_back(n);
            n = (n | (n - 1));
        }
        
        reverse(sequence.begin(), sequence.end());
        
        cout << sequence.size() << endl;
        for (long long num : sequence) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
