#include<iostream>
using namespace std;
int f(int i , int j, int m, int n){
 if(i== m-1 && j == n-1) return 1;
 if(i>= m || j>= n) return 0;
 return f(i, j +1, m, n) + f(i+1, j, m, n);
}

int main(){
 cout<<f(0,0,3,3);

 return 0;
}