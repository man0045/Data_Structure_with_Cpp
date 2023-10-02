#include<iostream>
using namespace std;
bool iseven(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n  ;
    cout<<"enter the number"<<endl;
    cin>>n;
    if (iseven(n)){
        cout<<"number is odd"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }

    return 0;
}