#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        int k = (sum * 100) / (i + 1); // i+1 to avoid division by zero and correct calculation
        if(k == 100) {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}
