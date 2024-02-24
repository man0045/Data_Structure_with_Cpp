#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int m, n;
  cin>>m>>n;
  int k = 4*m-2;

  if(k == n){
   cout<<ceil(n/2.0) + 1<<endl;
  }
  else
  {
   float x = static_cast<float>(n) / 2; 
   cout<<ceil(x)<<endl;
  }
 }
}