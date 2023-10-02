#include<iostream>
using namespace std;
int f(int n){
 int a, b;
 a= 0;
 b =1;
 if(n == 0 or n == 1) return n;
 int c;
 int i = 2;
 while(i<=n){
  c=a+b;
  a=b;
  b=c;
  i++;
 }
 return c;
}
int main(){
 int n;
 cout<<"Enter the Value of n"<<endl;
 cin>>n;
 cout<<f(n)<<endl;
}