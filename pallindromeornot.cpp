#include<iostream>
using namespace std;

bool f(int num, int *temp){
 if(num>=0 && num<=9){
  int lastdigitoftemp = (*temp)%10;
  (*temp)/=10;
  return (num == lastdigitoftemp);

 }
 bool result(f(num/10, temp) && (num%10) + ((*temp)%10));
 (*temp)/=10;
 return result;
}
int main(){
 int num = 1261;
 int anotherNum = num;
 int *temp = &anotherNum;
 cout<<f(num, temp);
 return 0;
}