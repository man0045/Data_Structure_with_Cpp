#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    bool isprime =1;
    for(int i=2; i<n;i++){
        if(n%i == 0){
            // cout<<" not a prime " <<endl;
            isprime = 0;
            break;
        }
        
    }
    if(isprime == 0){
        cout<<"not a prime number"<<endl;
    }
    else;
    {
        cout<<"is a prime number" <<endl;
    }
}