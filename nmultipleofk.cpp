#include<iostream>
using namespace std;


int f(int n, int k){
 if(k==0) return 0;
 f(n, k-1);
 cout<<(n *k)<<" ";
}
int main(){
 f(8,6);
 return 0;
}