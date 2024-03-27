#include <iostream>
#include <vector>
using namespace std;
// int main()
// {
//  int t;
//  cin >> t;
//  while (t--)
//  {
//   int n;
//   cin >> n;
//   string mainString;
//   cin >> mainString;

//   vector<string> vt;
//   string str = "";
//   // for (int i = 0; i < n; i++)
//   // {
//   //  str += arr[i];
//   //  vt.push_back(str);
//   // }
//   // for (int i = 0; i < vt.size(); i++)
//   // {
//   //  cout << vt[i] << " "; // Print each element of the vector
//   // }
//   for (int i = 0; i < mainString.length(); ++i)
//   {
//    // Extract substrings of different lengths starting from position i
//    for (int len = 1; i + len <= mainString.length(); ++len)
//    {
//     string substring = mainString.substr(i, len);
//     vt.push_back(substring);
//    }
//   }
//   int cnt = 0;
//   for (int i = 0; i < vt.size(); i++)
//   {
//    if (vt[i] == "pie" or vt[i] == "map")
//    {
//     cnt += 1;
//    }
//   }
//   cout << cnt << endl;
//  }
// }

int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
    cin >> n;
    string str;
    cin >> str;
    int P = 0, M = 0;
    size_t places= 0;
    while ((places=str.find("pie", places)) != string::npos)
    {
        P++;
        places+= 3;
    }
    places= 0;
    while ((places= str.find("map", places)) != string::npos)
    {
        M++;
        places+= 3;
    }

    cout << P + M << endl;
 }
}