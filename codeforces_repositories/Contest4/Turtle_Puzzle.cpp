#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int t;
  cin>>t;
  int arr[t];
  for(int i =0; i<t; i++){
   cin>>arr[i];
  }
  int sum = 0;
  for(int i =0; i<t; i++){
   sum +=abs(arr[i]);
  }
  cout<<sum<<endl;
 }
}