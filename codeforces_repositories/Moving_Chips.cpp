#include<iostream>
using namespace std;


int funct(int n, int arr[]){
 int backS = -1, frontS = -1;
 for(int i=0; i<n; i++){
  if(arr[i] == 1){
   if(backS == -1){
    backS=i;
   }
   frontS = i;
  }
 }
 int z = 0;
 for(int i = backS+1; i<frontS; i++){
  if(arr[i]==0){
   z++;
  }
 }
 return z;
}
int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  int arr[n];
  for(int i =0; i<n; i++){
   cin>>arr[i];
  }
  int ans = funct(n, arr);
  cout<<ans<<endl;
 }
}