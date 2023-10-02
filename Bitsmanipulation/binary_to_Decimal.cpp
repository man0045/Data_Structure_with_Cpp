#include<iostream>
using namespace std;

int binary_to_decimal(string &binary){
 int n = binary.size();
 int result = 0;

 for(int i =0; i<n; i++){
  char ch = binary[i];
  int num = ch-'0';
  result = result+ num*(1 << (n-i-1));

 }
 return result;
}
int main(){
 string str = "00011111";
 cout<<binary_to_decimal(str)<<"\n";
 return 0;
}