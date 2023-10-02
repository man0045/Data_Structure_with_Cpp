#include<iostream>
using namespace std;

int f(int n){
 if(n <=9 && n>=0  ) return n;
 return (n/10) + (n%10);
}

int main(){
 int r = f(15);
 cout<<r<<endl;
 return 0;
}