#include<iostream>
#include<limits.h>
using namespace std;
int main(){
 int arr[] = {4,2,1,4,6,7,8,3,5,};
 int n = sizeof(arr)/sizeof(arr[0]);
 int k = 4;
 int sum = 0;
 int maxSum = INT_MIN;
 int MaxIdx = 0;
 for(int i = 0; i<k; i++){
  sum+=arr[i];
 }
 maxSum = sum;
 int i = 1;
 int j = k;
 while(j<n){
  sum=sum+arr[j]-arr[i-1];
  if(maxSum<sum){
   maxSum = sum;
   MaxIdx=i;
  }
  i++;
  j++;
 }
 cout<<maxSum<<endl;
 cout<<MaxIdx<<endl;

}