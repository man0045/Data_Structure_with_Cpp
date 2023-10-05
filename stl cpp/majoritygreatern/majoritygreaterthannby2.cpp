#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int main(){
 int n;
 cout<<"Enter the size of an array "<<endl;
 cin>>n;
 vector<int>arr;
 for(int i =0; i<n; i++){
  cin>>arr[i];
 }
 int min =0;
 char ans;
 unordered_map<int, int>map;
 for(int i =0; i< n; i++){
  map[arr[i]]++;
 }
 for(auto elem: map){
  if(elem.second > int(n/2)){
   cout<<elem.first<<endl;

  }
 
 }
 cout<< -1 <<endl;
}




