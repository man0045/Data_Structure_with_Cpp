#include<iostream>
#include<vector>
using namespace std;
int main(){
 string str;
 string result = "";
 cout<<"enter the string"<<endl;

 cin>>str;
 for(int i =0; i<str.size(); i++){
  if(str[i]!='a')
  {
   result+= str[i];
  }
 }
 cout<<result<<endl;

}