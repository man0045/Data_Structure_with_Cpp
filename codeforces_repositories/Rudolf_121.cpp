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
  string str = "";
  for(int i = 0; i<a; i++){
   str+= to_string(arr[i]);
  }
  int k = stoi(str);
  if(k%10==0 or k%121 !=0 ){
   cout<<"No"<<endl;
  }
  else{
   cout<<"YES"<<endl;
  }
 }
}