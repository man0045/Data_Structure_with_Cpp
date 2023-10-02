#include<iostream>
using namespace std;
void reverse(int n, int &ans){
 if(n == 0){
  return;
 }
 int digit = n%10;
 ans = ans*10 + digit; 
 reverse(n/10,ans);


}
int main(){
 int n ;
 cin>>n;
 int ans = 0;
 reverse(n,ans);

 cout<<ans<<endl;
 return 0;
}