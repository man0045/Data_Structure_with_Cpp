#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 string str;
 
 
 cout<<"Enter the string to check whether string is paalindrome or not"<<endl;

 cin>>str;
 string reversedStr = str;
 reverse(reversedStr.begin(), reversedStr.end());
// if there is number then we will going to use int
// int reversedInt = 0;
// int number;
// while(number!=0){
//  int digit = number%10;
//  reversedInt = reversedInt*10 + digit;
//  number/=10;
// }
// return reversedInt;
 
 if(reversedStr == str) cout<<"Pallendrome"<<endl;
 else cout<<"Not pallendrome";
}