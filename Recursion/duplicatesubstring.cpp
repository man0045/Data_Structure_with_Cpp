#include <iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string ans, string original, vector<string>&val, bool flag){
 if(original == ""){
  val.push_back(ans);
  return;
 }
 char ch = original[0];
 if(original.length() == 1){
  if(flag == true) subset(ans + ch, original.substr(1), val,true);
  subset(ans, original.substr(1), val,true);
  return;
}
char dh = original[1];
if(ch == dh){
 if(flag == true) subset(ans+ch, original.substr(1),val, true);
 subset(ans, original.substr(1),val,false);
}
else{
 if(flag == true) subset(ans+ch, original.substr(1),val, true);
 subset(ans, original.substr(1),val, true);
}
}
int main(){
 string str = "Mnn";
 vector<string>val;
 subset("",str,val,true);
 for(int i =0; i<val.size(); i++){
  cout<<val[i]<<endl;
 }

}