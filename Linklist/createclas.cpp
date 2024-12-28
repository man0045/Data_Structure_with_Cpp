#include<bits/stdc++.h>
using namespace std;
class Node{
public: 
 int val;
 Node* next;
 Node(int val){
  this->val = val;
  this->next = NULL;
 }
};

void display(Node* head){
 while(head != NULL){
  cout<<head->val<<" ";
  head = head->next;
 }
 cout<<endl;
}

void deleteNode(Node* head, int target){
 while(head!= NULL){
  if(head->val != target){
   head = head->next;
  }
  head->next = head->next->next;
 }
}
int main(){
  Node* a = new Node(10);
 Node* b = new Node(20);
 Node* c = new Node(30);
 Node* d = new Node(40);
 Node* e = new Node(50);
 a->next = b;
 b->next =c;
 c->next = d;
 d->next = e;
 Node* head = a;
 display(head);
 deleteNode(head, 20);
 display(head);


}