#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> &queue){
 int n = queue.size();
 for(int i = 1; i<=n; i++){
  int x = queue.front();
  cout<<x<<" ";
  queue.pop();
  queue.push(x);
 }
 cout<<endl;
}
void rev(queue<int> &queue, int k){
 stack<int> st;
 for(int i = 0; i < queue.size(); i++){
  st.push(queue.front());
  queue.pop();

 }
 while(st.size()>0){
  queue.push(st.top());
  st.pop();
 }
 int n = queue.size();
 for(int i= 1; i<=n-k; i++){
  queue.push(queue.front());
  queue.pop();
 }
}


int main(){
 queue<int> que;
 que.push(23);
 que.push(33);
 que.push(53);
 que.push(45);
 que.push(37);
 display(que);
 rev(que, 3);
 display(que);
}