#include<iostream>
using namespace std;
int main(){
 int arr[] = {2,3,4,5,6,7,2};
 int n = sizeof(arr)/sizeof(arr[0]);
 for(int i = 0; i<n; i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
 int i = 0;
 while (i < n) {
  int correctIdx = arr[i] - 1;
  if (arr[i] != arr[correctIdx]) {
      swap(arr[i], arr[correctIdx]);
  } else {
      i++;
  }
 }
 for(int i = 0; i<n; i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;

}