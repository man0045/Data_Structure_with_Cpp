#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "enter the number" << endl;
    cin>>a;
    int i=1;
    while(i<=a){
        int j=1;
        while(j<=a){
            char ch ='A' + j-1;
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }

}