#include<iostream>
using namespace std;
void maze(int sr, int sc, int er, int ec, string s){
 if(sr>er || sc>ec) return;
 if(sr==er || sc == ec){
  cout<<s<<endl;
  return;
 }
 maze(sr, sc+1, er, ec, s+'R');//here R represents the it is going rightward
 maze(sr+1, sc, er,ec, s+'D');//here D represents choosing downward path 
}

int main(){

 maze(1,1,5,5,"");
}