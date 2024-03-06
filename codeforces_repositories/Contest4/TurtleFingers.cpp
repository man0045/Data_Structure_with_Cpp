#include<bits/stdc++.h>
using namespace std;

long long power(int b, int e) {
    long long ans = 1;
    for (int i = 0; i < e; ++i) {
       ans *= b;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        unordered_set<int> solutionVeector;
        int a, b, l;
        cin >> a >> b >> l;        
        for (int i = 0; ; i++) {
            long long firstPower = power(a, i);
            if (firstPower > l) break;
            
            for (int j = 0; ; j++) {
                long long k = firstPower * power(b, j);
                if (k > l) break;
                
                if (l % k == 0) {
                    solutionVeector.insert(l / k);
                }
            }
        }
        
        cout <<solutionVeector.size() << endl;
    }
    
    return 0;
}
