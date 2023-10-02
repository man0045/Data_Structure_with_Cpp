#include<iostream>
using namespace std;

int gcd(int a, int b){
 if(b>a) return gcd(b,a);

 if(b==0) return a;
 return gcd(b , a%b);


}

int main(){
 int x = gcd(40, 48);
 cout<<x<<endl;
 return 0;
}