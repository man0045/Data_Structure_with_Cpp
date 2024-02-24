#include <iostream>
#include <vector>
using namespace std;

vector<int> ii()
{
 string input;
 getline(cin, input);
 vector<int> result;
 size_t pos = 0;
 while ((pos = input.find(' ')) != string::npos)
 {
  result.push_back(stoi(input.substr(0, pos)));
  input.erase(0, pos + 1);
 }
 if (!input.empty())
 {
  result.push_back(stoi(input));
 }
 return result;
}

const int mxn = 200010;
vector<int> SS(mxn, 0);

int dp(int n)
{
 int ans = 0;
 for (char c : to_string(n))
 {
  ans += c - '0';
 }
 return ans;
}

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  for (int i = 0; i < mxn - 1; i++)
  {
   SS[i + 1] = dp(i + 1) + SS[i];
  }

  vector<int> M;
  int n = ii()[0];

  cout << SS[n] << endl;
 }
 return 0;
}
