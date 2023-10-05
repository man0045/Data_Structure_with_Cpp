#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;


int main(){
 string n;
 cout<<"Enter the String "<<endl;
 cin>>n;
 int min = 234567890;
 char ans;
 map<char, int>map;
 for(int i =0; i< n.length(); i++){
  map[n[i]]++;
 }
 for(auto elem: map){
  if(elem.second < min){
   min = elem.second;
   ans = elem.first;

  }
 //  else{
 //   cout<<"Not be available for more time"<<endl;
 //  }
 }
 cout<<ans<<endl;
}


 // cout<<n<<endl;



