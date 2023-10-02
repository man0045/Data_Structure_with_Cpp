#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
         int nextnumber = a+b;
         cout<<nextnumber<<"  " ;
         a = b;
         b= nextnumber;

    }
}
int main(){
    int n;
    cout<<"enter the number of terms to print the fibonacci "<<endl;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;

}