#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
 if(ch == '+' || ch == '-') return 1;
 else return 2;
}
int solve(int val1, int val2, char ch){
 if(ch == '+') return val1+val2;
 else if(ch == '-') return val1-val2;
 else if(ch == '*') return val1*val2;
 else return val1/val2;
}
int main(){
 string s = "(2+3)*5/6-9";
 stack<int> st;
 stack<char>oper;
 for(int i = 0; i<s.length(); i++){
  if(s[i]>= 48 and s[i] <= 57) st.push(s[i]-48);
  else{
    if(oper.size()==0) oper.push(s[i]);
    else if(s[i] == '(') oper.push(s[i]);
    else if(oper.top() == '(') oper.push(s[i]);
    else if(s[i] == ')'){
     while(oper.top()!= '('){
       char ch = oper.top();
       oper.pop();
       int val2 = st.top();
       st.pop();
       int val1 = st.top();
       st.pop();
       int ans = solve(val1, val2, ch);
       st.push(ans);
      }
      oper.pop();
    }
    else if(priority(s[i]) > priority(oper.top())) oper.push(s[i]);
    else{
     while(oper.size() >0 and priority(s[i]) <= priority(oper.top())){
     char ch = oper.top();
     oper.pop();

     int val2 = st.top();
     st.pop();
     int val1 = st.top();
     st.pop();
     int ans = solve(val1, val2, ch);
     st.push(ans);
    }
    oper.push(s[i]);
    }
   }
   
  while(oper.size() > 0){

   char ch = oper.top();
   oper.pop();

   int val2 = st.top();
   st.pop();
   int val1 = st.top();
   st.pop();
   int ans = solve(val2, val1, ch);
   st.push(ans);
  }
 }
 cout<<st.top()<<endl;
}

