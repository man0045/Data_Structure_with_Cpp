#include<iostream>
#include<set>
using namespace std;
int main(){
 set<int>set1;
 set1.insert(3);
 set1.insert(2);
 set1.insert(1);
 set1.insert(4);
 set1.insert(5);
 cout<<set1.size()<<endl;
 set1.insert(3);
 cout<<set1.size()<<endl;
 // there has been no any change in size because duplicate value is
 //added and sets contain only unique value
 //set<int>::iterator itr;
 // for(itr = set1.begin(); itr!=set1.end(); itr++){
 //  cout<<*itr<<" ";

 // }cout<<endl;
 // set1.erase(4);
 //erasing the value at index by using 
 // advance function
 auto itr = set1.begin();
 advance(itr, 3);
 set1.erase(itr);
 if(set1.find(5)!=set1.end()){
  cout<<"value is present"<<endl;
 }else{
  cout<<"value is not present "<<endl;
 }
 for(itr = set1.begin(); itr!=set1.end(); itr++){
  cout<<*itr<<" ";

 }cout<<endl;

 return 0; 
}
