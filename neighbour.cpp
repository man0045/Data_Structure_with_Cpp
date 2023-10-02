#include<iostream>
#include<string>
using namespace std;
int main(){
 string str;
 cout<<"enter the string"<<endl;
 cin>>str;
 int count =0;
 int n = str.size();
 for(int i =0; i< n; i++){
  if(i ==0){
   if(str[i]!=0){
    count ++;
   }
   else if(i == n-1){
    if(str[i]!=str[i-1]){
     count ++;
    }
   }
  }
  else if(str[i] !=str[i+1] && str[i+1]!=str[i-1]){
   count++;
  }
 }
 cout<<count;
}
