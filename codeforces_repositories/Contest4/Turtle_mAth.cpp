#include <iostream>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int t;
  cin >> t;
  int arr[t];
  for (int i = 0; i < t; i++)
  {
   cin >> arr[i];
  }
  int sum = 0;
  for (int i = 0; i < t; i++)
  {
   sum += abs(arr[i]);
  }
  if (sum % 3 == 0)
  {
   cout << 0 << endl;
  }
  else
  {
   int k = sum + 1;
   if (k % 3 == 0)
    cout << 1 << endl;

   else
   {
    bool found = false;
    for (int i = 0; i < t; i++)
    {
     int newsum = sum - arr[i];
     if (newsum % 3 == 0)
     {
      cout << 1 << endl;
      found = true;
      break;
     }
    }
    if (!found)
    {
     cout << 2 << endl;
    }
   }
  }
 }
}