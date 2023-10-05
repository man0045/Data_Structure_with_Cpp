#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){


 map<string,long long>directory;
 directory["mannu"] = 9335801585;
 directory["arjun"] = 2345678931;
 directory["anmol"] = 9876533216;
 directory["aditya"] = 9876243216;
 directory["aamdk"] = 98765732168;


 for(auto element: directory){
  cout<<"Name - "<< element.first <<"PhoneNumber --" << element.second<<endl;
 }

}