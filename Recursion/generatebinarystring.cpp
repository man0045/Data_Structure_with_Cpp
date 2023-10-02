#include<iostream>
#include<string>

using namespace std;
void generate(string s, int n){
 if(n == 0){
  cout<<s<<endl;
  return;
 }
 generate(s+'0', n-1);
 if(s=="" || s[s.length() - 1] == '0') generate(s+'1', n-1);
}

int main(){
 int n = 4;
 generate("",4);
}