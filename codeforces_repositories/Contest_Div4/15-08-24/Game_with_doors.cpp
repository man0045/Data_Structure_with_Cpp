#include <iostream>
#include <map>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int x, y, z, w;
  cin >> x >> y >> z >> w;

  if (z > y || x > w)
  {
   cout << 1 << endl;
   continue;
  }

  if (z < x)
  {
   swap(x, z);
   swap(y, w);
  }

  // overlap-1
  // left right check
  int result = 0;

  map<int, int> freq;

  for (int i = x; i <= y; i++)
  {
   freq[i]++;
  }
  for (int j = z; j <= w; j++)
  {

   freq[j]++;
  }

  int left = -1;
  int right = -1;

  for (int i = 1; i <= 100; i++)
  {
   if (freq[i] == 2)
   {
    result++;
    if (left == -1)
    {
     left = i;
    }
    right = i;
   }
  }

  result--;

  if (min({x, y, z, w}) < left)
  {
   result++;
  }

  if (max({x, y, z, w}) > right)
  {
   result++;
  }

  cout << result << endl;
 }
}
