#include <iostream>
using namespace std;

string decimal_to_binary(int num){
 string result = "";
 while(num>0){
  if(num%2 == 0){
   result = "0" + result;
  } else{
   result = "1" + result;
  }
  num=num/2;
 }
 return result;
}
int main(){
cout<<decimal_to_binary(15)<<"\n";
return 0;
}