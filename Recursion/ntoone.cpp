#include<iostream>
using namespace std;
void fun(int n){
 if(n == 0) return;

 cout<<n<<endl;
 fun(n-1);

}

int main(){
 int n;
 cout<<"Enter the how many times ypu want to say"<<endl;
 cin>>n;
 fun(n);
}