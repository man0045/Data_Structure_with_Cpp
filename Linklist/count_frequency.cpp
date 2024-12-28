#include<bits/stdc++.h>
using namespace std;

int main() {
    string pat, txt;
    cin >> pat;
    cin >> txt;
    int n = pat.size();
    int m = txt.size();
    int count = 0;
    for (int i = 0; i <= n - m; i++) {
        int match = 0;
        for (int j = 0; j < m; j++) {
            if (pat[i + j] == txt[j]) {
                match++;
            }
        }
        if (match == m) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
