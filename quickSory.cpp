#include<iostream>
using namespace std;
int partition(int arr[], int si, int ei){
 int pivotElement = arr[(si + ei)/2];
 int count = 0;
 for(int i = si; i<=ei; i++){
  if(i==(si+ei)/2) continue;
  if(arr[i] <= pivotElement) count++;
 }
 int pivotIdx = count + si;
 swap(arr[(si+ei)/2], arr[pivotIdx]);
 int i = si;
 int j = ei;
 while(i<pivotIdx && j > pivotIdx){
  if(arr[i] <= pivotElement) i++;
  if(arr[j] >pivotElement) j--;
  else if(arr[i] > pivotElement && arr[j] <= pivotElement){
   swap(arr[i],arr[j]);
   i++;
   j--;
  } 
 }
 return pivotIdx;
}
void quickSort(int arr[],int si,int ei){
 if(si >= ei) return;

 int pi = partition(arr, si,ei);
 quickSort(arr,si, pi - 1);
 quickSort(arr,pi+1, ei);
}

int main(){
 int arr[] = {5,9,7,1,3,5,6,7,8};
 int n = sizeof(arr)/sizeof(arr[0]);
 for(int i =0; i<n; i++){
  cout<<arr[i]<<" ";
 }
 quickSort(arr,0,n-1);
 cout<<endl;
 for(int i =0; i<n; i++){
  cout<<arr[i]<<" ";
 }
}