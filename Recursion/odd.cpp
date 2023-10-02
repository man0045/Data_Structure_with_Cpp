#include<iostream>
using namespace std;

int odd(int a, int b){
 if(b<a) return 0;
 int sum = 0;
 if(b%2 == 0) return odd(a+1, b);
 return (a+odd(a + 2, b));



  
}
int main(){
 int a, b;
 cout<<"Enter the range to get the Output of odd number between a and b : ";
 cin>>a>>b;


 cout<<odd(a,b)<<endl;
 
}