#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
 unordered_map<int, string> mapp;
 mapp.insert(make_pair(1, "mannu"));
 mapp[2]= "aman";
 mapp[3] = "govind";

 for(auto pair : mapp){
  cout<< "The Name is : - "<<pair.second<<endl;
  cout<< "The rollno is : - "<<pair.first<<endl;
 }
}