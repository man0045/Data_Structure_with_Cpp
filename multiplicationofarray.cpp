#include<iostream>
using namespace std;

int main(){
  cout<<"Enter the array "<<endl;
  int n;
  cin>>n;
  int arr[5];
  int s=1;
  cout<<"enter the element"<<endl;
  for(int i =0; i<n; i++){
   cin>>arr[i];
   s = s*arr[i];
  
  }
  if(s>0){
    cout<<"1"<<endl;
  }
  else if(s<0){
    cout<<"-1"<<endl;
  }
  else{
    cout<<"0"<<endl;
  }


 
}