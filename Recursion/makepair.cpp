#include<iostream>
using namespace std;

int f(int n){
 if( n== 2 or n == 1) return n;

 else return f(n-1) + (n-1)*f(n-2);
}
int main(){
 cout<<"Enter the no of persons for making possible pairs"<<endl;

 int n;
 cin>>n;
 cout <<f(n);

}