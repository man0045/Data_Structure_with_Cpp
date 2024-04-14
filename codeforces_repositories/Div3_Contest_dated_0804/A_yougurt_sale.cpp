#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while (t--)
 {
  int n, a, b;
  cin>>n>>a>>b;
  int total = (n / 2) * min(2 * a, b) + (n % 2) * a;
  cout<<total<<endl;
 }
 return 0;
}