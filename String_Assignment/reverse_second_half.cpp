#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 string str;
 cin>>str;
 int n = str.size();

 reverse(str.begin() + n/2, str.end());
 cout<<str<<endl;
}