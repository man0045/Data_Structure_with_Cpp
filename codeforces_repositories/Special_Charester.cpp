#include <iostream>
#include <string>
using namespace std;
string f(int Input) {
    if (Input % 2 == 1 || Input < 2) {
        return "NO";
    }
    
    string prol = "AAB";
    for (int i = 3; i < Input; i += 2) {
        prol += "AAB";
    }
    
    return "YES\n" + prol;
}

int main() {
    int Trans;
   cin >> Trans;
    
    for (int i = 0; i < Trans; ++i) {
        int Keos;
        cin >> Keos;
        cout << f(Keos) << std::endl;
    }
    
    return 0;
}