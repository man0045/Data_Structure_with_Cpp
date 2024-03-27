#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int a, b, c;
  cin>>a>>b>>c;
  int arr1[a], arr2[b];
  for(int i = 0; i<a; i++){
   cin>>arr1[i];
  }
  
  for(int i = 0; i<b; i++){
   cin>>arr2[i];
  }
  int count = 0;
  for(int i =0; i<a; i++){
   for(int j = 0; j<b; j++){
    if((arr1[i] + arr2[j]) <= c ){
     count+=1;
    }
   }

  }
  cout<<count<<endl;;
 }
}