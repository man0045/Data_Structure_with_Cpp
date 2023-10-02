#include<iostream>
#include<limits.h>
using namespace std;
void maxelement(int arr[],int n,int idx,int max){
 if(idx == n){
  cout<<max<<endl;
  return;
 }
 if(max< arr[idx]) max = arr[idx];
 maxelement(arr, n, idx+1, max);
}
int main(){
 int arr[] = {2,23,26,57,32,54};
 int n = sizeof(arr)/sizeof(arr[0]);
 maxelement(arr,n,0,INT_MIN);

}