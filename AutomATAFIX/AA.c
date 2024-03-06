#include<stdio.h>

int sumofelement(int p[], int n){

 if(n<0){
  return 0;
 }
 return (sumofelement(p, n-1) + p[n-1]);
}
int main(){
 int x,b;
 scanf("%d", &x);
 int a[x];
 for(int i =0; i<x; i++){
  scanf("%d", &a[i]);
 }
 printf("%d", sumofelement(a, x));
 return 0;
}