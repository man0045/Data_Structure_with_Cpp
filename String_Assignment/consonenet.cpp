#include<iostream>
using namespace std;
int main(){
 string str;
 cin>>str;
 int count = 0;


 int n = str.size();

 for(int i = 0; i<n; i++){
  if(str[i] == 'a' or str[i] == 'o' or str[i] == 'i' or str[i] == 'e' or str[i] == 'u') count +=1;
 }
 cout<<(n-count);

}