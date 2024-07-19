#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  string input_str;
  cin >> input_str;
  int str_length = input_str.size();
  int count = 0;
  for (int i = 0; i < str_length - 1; i++)
  {
   if (input_str[i] == '0' && input_str[i + 1] == '1')
   {
    count = -1;
   }
  }
  for (int i = 1; i < str_length; i++)
  {
   if (input_str[i] != input_str[i - 1])
   {
    count++;
   }
  }
  cout<<count+1<<endl;
 }
}