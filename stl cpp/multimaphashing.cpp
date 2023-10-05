#include<iostream>
#include<map>
using namespace std;

int main(){

 multimap<int, string> mma;
 mma.insert(make_pair(2345, "Mannu"));
 mma.insert(make_pair(2346, "Manua"));
 mma.insert(make_pair(2345, "Riya"));


 for(auto elem : mma){
  cout<<elem.first<<endl;
  cout<<elem.second<<endl;
 }
 

}