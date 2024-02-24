#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 while (n--)
 {
  string st;
  cin>> st;
  int cnt1 = 0;
  int cnt2 = 0;
  int n = st.size();
  for(int i = 0; i<n; i++){
   if(st[i] == 'A') cnt1+=1;
   else cnt2+=1;
  }
  if(cnt1>cnt2) cout<<"A"<<endl;
  else cout<<"B"<<endl;

 }
 return 0;
}
