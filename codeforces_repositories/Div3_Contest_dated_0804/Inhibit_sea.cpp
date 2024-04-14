#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        vector<int> arr(a);
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
        }
        int i = 0;
        while (i < arr.size()) {
            if (arr[i] < b) {
                b -= arr[i];
                arr.erase(arr.begin() + i); // Remove the element at index i
            } else {
                i++; // Only increment if element not removed
            }
        }
        cout << a-arr.size() << endl; // Output the size of the updated array
    }
    return 0;
}
