// #Another code for  decimal  to binary conversion with finding out
// how many set bits are present in a particular sets;

#include<iostream>
using namespace std;

void decimal_to_binary(int n){
 int i =0;
 int binarynum[32];
 while(n>0){
  binarynum[i] = n%2;
  n = n/2;
  i++;

 }
 for(int j = i-1; j>=0; j--){
  cout<<binarynum[j];
 }

}

int main(){
 int n = 15;
 decimal_to_binary(n);
 return 0;
}