#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

bool makeequal(vector<string> &(arr)){

 unordered_map<char , int> m;
 for(auto str:arr){
  for(char c:str){
   m[c]++;

  }
 } 
 int n = arr.size();
 for(auto ele:m){
  if(ele.second%n !=0){
   return false;
  }
 }
 return true;
}

int main(){
 int n;
 cin>>n;
 vector<string>arr(n);
 for(int i =0; i<n; i++){
  cin>>arr[i];
 }

 cout<<(makeequal(arr)? "Yes": "No" )<<endl;

}