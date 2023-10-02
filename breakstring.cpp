#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
 string str = "i am mannu chaurasiya from abes engineering college";
 stringstream ss(str);
 string temp;
 while(ss>>temp){
  cout<<temp<<endl;
 }
}