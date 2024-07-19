// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    if(n < 60) cout<<"D"<<endl;
    else if(n > 60 and n <= 75) cout<<"c"<<endl;
    else if(n > 75 and n <= 90) cout<<"B"<<endl;
    else cout<<"A"<<endl;

    return 0;
}