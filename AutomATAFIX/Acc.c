#include<stdio.h>


int main(){
 int arr[100], n, largest, i, max_idx = 0;
 scanf("%d", &n);
 for(i = 0; i<n; i++){
  scanf("%d", &arr[i]);
 }
 largest=arr[0];
 for(int i =1; i<n; i++){
  if(largest < arr[i]){
   max_idx = i;
  }
  largest=max_idx;
 }
 printf("%d", max_idx);
 return 0;
}
