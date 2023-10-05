#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
 unordered_multiset<int> msl;

 msl.insert(4);
 msl.insert(8);
 msl.insert(3);
 msl.insert(1);
 msl.insert(4);
 for(auto value: msl){
  cout<<value<<" ";
 }cout<<endl;
}


