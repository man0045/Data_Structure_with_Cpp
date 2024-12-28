#include<bits/stdc++.h>
using namespace std;
int main(){
 string large;
 cin>>large;
 int count = 0;
 for(int i = 0; i< large.size(); i++){
  if((large[i] > 31 and large[i] <= 47) or (large[i] > 58 and large[i] <= 64) or (large[i] >=91 and large[i] <= 96) or (large[i] >= 121 and large[i] <= 126)){
   count +=1;
  }
 }
 cout<<count<<endl;
}