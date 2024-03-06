#include<iostream>
using namespace std;
int emplyeeID(int len, int start, int end, int *arr){
 int flag = 1;
 int s = 0; 
 for(int i = 0; i<len; i++){
  if(arr[i] > start and arr[i] < end){
   flag = 1;
  }
  else{
   flag = -1;
  }
  if(flag == 1){
   s = s+i;
  }
 }
 return s;
}
int main(){
 int len = 5;
 int arr[5] = {29, 38, 90, 48, 39};
 int start = 30;
 int end = 50;
 cout<<emplyeeID(5,start, end, arr)<<endl; 
}