#include<iostream>
using namespace std;
int main(){
    int a;
    int count =1;
    cout<< "enter the number" << endl;
    cin>>a;
    int i=1;
    while(i<=a){
        int j=1;
        while(j<=a){
            cout<<count<<" ";
            count = count +1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }

}