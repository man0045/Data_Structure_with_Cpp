#include<iostream>
using namespace std;
class Node{
public:

 int val;
 Node* next;
 Node(int val){
  this->val = val;
  this ->next = NULL;
 }
};
int main(){
 Node a(10);
 Node b(20);
 Node c(30);

 Node d(40);
 cout<<a.next;
 // c.val = 40;

 a.next = &b;
 b.next = &c;
 c.next = &d;
}