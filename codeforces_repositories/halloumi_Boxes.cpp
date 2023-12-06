#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;


        // Initialize the array after getting the value of x
        int arr[x];
        for (int i = 0; i < x; i++) {
            cin >> arr[i];
        }

        // Check the elements in the array
        // bool sorted = true;
        for (int i = 0; i < x - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // sorted = false;
                // break;
                cout<<"NO"<<endl;
            }
            else{
             cout<<"YES"<<endl;
            }
        }

        // Output the result after checking the array
        // if (sorted) {
        //     cout << "YES" << endl;
        // } else {
        //     cout << "NO" << endl;
        // }
    }

    return 0;
}
