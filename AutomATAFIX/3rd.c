#include <stdio.h>
void replace(int Size, int *arr)
{
 int i, j;
 int sum = 0;
 for (int i = 0; i < Size; i++)
 {
  sum = sum + arr[i];
 }
 if (sum % 2 == 0){
  for(i = 0; i<Size; i++){
   arr[i] = 0;
  }
 }
 else{
  for(i = 0; i<Size; i++){
   arr[i] = 1;
  }
 }
}
int main()
{
 int Size = 5 ;
 int arr[5] = {18, 13, 45, 23, 82};
 replace(Size, arr);
 for (int i = 0; i < Size; i++)
 {
  printf("%d ", arr[i]);
 }
}