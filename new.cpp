#include<iostream>
#include<set>
using namespace std;
int main(){
 int n;
 int m;
 cout<<"Enter the Size of two sets";
 cin>>n>>m;
 int *arr1 = new int[n];
 int *arr2 = new int[m];
 cout<<"enter the element of first array"<<endl;
 set<int>s;
 for(int i =0; i<n; i++){
  cin>>arr1[i];
  s.insert(arr1[i]);
 }
 cout<<"Enter the size of 2nd array"<<endl;
 for(int i = 0; i<m; i++){
  cin>>arr2[i];
  s.insert(arr2[i]);
 }
 cout<<"The union of this array is "<<endl;

 for(auto val :s){
  cout<<"{"<<val<<" "<<"}";
 }

}