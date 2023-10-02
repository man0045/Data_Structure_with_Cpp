#include <iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string ans, string original, vector<string>&val){
 if(original == ""){
  val.push_back(ans);
  return;
 }
 char ch = original[0];
 subset(ans, original.substr(1), val);
 subset(ans + ch, original.substr(1), val);


}
int main(){
 string str = "MANNU";
 vector<string>val;
 subset("",str,val);
 for(string ele: val){
  cout<<ele<<endl;
 }

}