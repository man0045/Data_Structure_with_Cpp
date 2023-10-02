#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"printing the value of n" << endl;
    cin>>n;
    cout<< "printing cout from 1 to n" << endl;
    int i=1;
    for(;;){
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
}