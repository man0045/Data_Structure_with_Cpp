#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int a;
  cin>>a;
  int arr[a];
  for(int i = 0; i<a; i++){
   cin>>arr[i];
  }
  int mod = arr[0];
  for(int i = 1; i<a;i++){
   mod%=arr[i];
  }
  if(mod == 1) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

 }
}