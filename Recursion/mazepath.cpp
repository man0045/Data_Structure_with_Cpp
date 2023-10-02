#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
 if(sr>er || sc>ec) return 0;
 if(sr==er || sc == ec) return 1;
 int rw = maze(sr, sc+1, er, ec);
 int dw = maze(sr+1, sc, er,ec);
 int tw = rw+dw;
 return tw;
}

int main(){

 cout<<maze(1,1,5,5);
}