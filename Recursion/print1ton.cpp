#include<iostream>
using namespace std;

void fun(int i, int n){
 if (i>n) return;
 cout<< i <<endl;
 fun(i+1,n); 
}
void gun(int i, int n){
 if (i>n) return;
 gun(i+1,n); 
 cout<< i <<endl;
}
int main(){
 int n;
 cout<<"Enter the how many times ypu want to say"<<endl;
 cin>>n;
 fun(1,n);
 gun(1,n-1);
}