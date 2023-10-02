#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
 string  s;
 cout<<"enter the string for count";
 getline(cin, s);
 int n = s.size();
 int count = 0;
 for(int i =0; i<n; i++){
  if(s[i]=='a' || s[i]== 'e' || s[i]== 'i' || s[i]=='o' || s[i]=='u'){
   count++;
  }
 
 }
 cout<<count<<endl;

}