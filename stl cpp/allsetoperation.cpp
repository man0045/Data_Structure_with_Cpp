#include<iostream>
#include<set>
#include<vector>

using namespace std;
int main(){
 int v;
 cout<<"Enter the size of data"<<endl;

 cin>>v;
 vector<int>data(v);
 cout<<"Enter the data" <<endl;
 for(int i =0; i<v; i++){
  cin>>data[i];
 }
 set<int> s;
 for(auto val: data){
  s.insert(val);
 }
 for(auto val: s){
  cout<<val<<endl;
 } 
 //here i m going to check and learn to know about dleting the data 
 cout<<"Enter the Element you want to delete<<"<<endl;
 int k;
 cin>>k;


 s.erase(k); 
 s.empty();
 for(auto val: s){
  cout<<val<<endl;
 } 

}