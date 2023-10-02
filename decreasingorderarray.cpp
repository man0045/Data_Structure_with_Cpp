#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int t;
int i;
int temp;
cout<<"enter the size of array want to push"<<endl;
cin>>t;
vector<int> s;
while(t--){
 int x;
 cin >> x;
 s.push_back(x);
 for(int i = 0; i<t; i++){
  if(x[i]<x[i+1]){
   temp= x[i]
  }
 }

} 
// for(int i =0; i<t;i++){
//  if(s[i]<s[i+1]){
//   temp = s[i];
//   s[i]= s[i+1];
//   s[i+1]=temp;
//  }
//  cout<<temp<<endl;
// }


}