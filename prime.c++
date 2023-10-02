#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(i<=n){
        if(n%i!=0){
            cout<< "number is prime : "<<i<<endl;

        }
        else{
            cout<<"not a prime : "<<i<<endl;
        }
        i=i+1;
    }
}
