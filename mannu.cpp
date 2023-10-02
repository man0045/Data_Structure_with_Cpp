#include<iostream>
using namespace std;
int main(){
 int n, x;
 cout<<"Enter the size of an array"<<endl;
 cin>>n;
 int *arr = new int[n];
 for(int i =0; i<n ; i++){
  cin>>arr[i];
 }
 cout<<"Enter the number to be match : ";
 cin>>x;
 int count = 0 ;
 for(int i = 0; i<n; i++){
  for(int j =i+1; j<n; j++){
   if((arr[i] + arr[j]) == x){
    count = 1;
   } 
  }
 }
 if(count == 1){
  cout<<"True"<<endl;
 }
 if(count == 0){
  cout<<"False6"<<endl;
 }
 

}