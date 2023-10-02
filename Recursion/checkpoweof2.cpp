#include<iostream>
using namespace std;
bool isPowerof2(int n){
    if(n==1) return true;
    if(n%2 != 0) return false;
    return isPowerof2(n/2);
}
int main(){
    int n = 64;
    if(isPowerof2(n))cout<<"YES, a power of 2" <<endl;
    else cout<<"NO, not a power of 2"<<endl;
}