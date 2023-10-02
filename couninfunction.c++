#include<iostream>
using namespace std;
void printcounting(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printcounting(n);
    return 0;


}