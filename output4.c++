#include<iostream>
using namespace std;
int main(){
    int n;
    for (int i=0;i <5;i++){
        for(int j=0;j<=5;j++){
            if(i+j ==10)
            {
                break;
            }
            cout<<i<<" " << j <<endl; 
        }
    }
}