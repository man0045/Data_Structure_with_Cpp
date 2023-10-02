#include<iostream>
using namespace std;

void id(int n, int i){
    if(i > n) return;
    cout<<i<<"";
    id(n,i+1);
    if(i>1)cout<<i-1;
}
int main(){
    id(5,1);
}