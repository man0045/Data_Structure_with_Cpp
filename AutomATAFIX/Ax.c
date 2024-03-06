#include <stdio.h>
void sortArray(int len, int *arr)
{
 int i, max, location, temp, j, k;
 if (len % 2 == 0)
 {
  for (i = 0; i < len; i++)
  {
   max = arr[i];
   location = i;
   for (j = i; j < len; j++)
   {
    if (max > arr[j])
    {
     max = arr[j];
     location = j;
    }
   }
    temp = arr[i];
    arr[i] = arr[location];
    arr[location] = temp;
  }
 }
 else
 {
  for (i = 0; i < len; i++)
  {
   max = arr[i];
   location = i;
   for (j = i; j < len; j++)
   {
    if (max < arr[j])
    {
     max = arr[j];
     location = j;
    }
   }
   temp = arr[i];
   arr[i] = arr[location];
   arr[location] = temp;
  }
 }
}

int main()
{
 int len = 6;
 int arr[20] = {34, 12, 56, 45, 9, 78};
 sortArray(len, arr);
 for (int i = 0; i < len; i++)
 {
  printf("%d ", arr[i]);
 }

 return 0;
}