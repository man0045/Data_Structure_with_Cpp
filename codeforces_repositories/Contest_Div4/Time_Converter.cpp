#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

void conversion_clock(string Tim) {
    int hour1 = (int)Tim[0] - '0';
    int hour2 = (int)Tim[1] - '0';

    int result = hour1 * 10 + hour2;

    string Pattern;
    if (result < 12) {
        Pattern = "AM";
    }
    else
        Pattern = "PM";

    result %= 12;
    if (result == 0) {
        cout << "12";
    }
    else {
        cout << setw(2) << setfill('0') << result;
    }
    cout << ":";
    for (int i = 3; i < 5; ++i) {
        cout << Tim[i];
    }
    cout << " " << Pattern << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        conversion_clock(str);
    }
    return 0;
}
