#include<iostream>
using namespace std;
void odd(int a, int b, int &sum){
    if(a>b) return ;

    if(a%2 != 0) 
    {
        sum = sum + a;
        odd(a+2,b, sum);
        return ;
    }
    else{
        odd(a+1,b, sum);
    }
    
}
int main(){
    int a = 6;
    int b = 12;
    if(a>b) swap(a,b);
    int sum = 0;
    odd(a,b,sum);
    cout<<sum;

}