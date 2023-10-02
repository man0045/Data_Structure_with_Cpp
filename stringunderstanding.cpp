#include<iostream>
#include<string>
using namespace std;
int main(){
 string s; // in this we get prioblem when we give the input as taking with spaces because when spaces entered the it become new input as a string and take out only first string before the spaces as output 
 // cin>>s;
 cout<<"Enter the string to be checked"<<endl;
 getline(cin,s);  // to avoiding this thing as input of these thing we must should use {getline} rather than <cin>
 cout<<s;


}