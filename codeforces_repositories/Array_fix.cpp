#include<iostream>
#include<vector>
using namespace std;
int main(){
 int t;
 cin>>t;
 vector<int>vt;
 while(t--){
  int a;
  cin>>a;
  int arr[a];
  for(int i = 0; i<a; i++){
   cin>>arr[i];
  }
  for(int i = 0; i<=a; i++){
   if(arr[i] > arr[i+1]){
    cout<<"YES"<<endl;
   }
   else{
    int t = arr[i]%10;
    int z = arr[i]/10;
    vt.push_back(z);
    vt.push_back(t);


   }
  }

 }
}