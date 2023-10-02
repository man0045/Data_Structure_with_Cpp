#include<iostream>
using namespace std;
class Node{
public:
 int val;
 Node* next;
 Node* prev;
 Node(int val){
  this->val = val;
  this->next = NULL;
  this->prev = NULL;
 }
};
class DLL{
public:
 Node* head;
 Node* tail;
 int size = 0;
 DLL(){
  
  head = tail = NULL;
  size = 0;
 }
 void insertAtTail(int val){
  Node* temp = new Node(val);
  if(size==0) head = tail = temp;
  else{
   tail->next = temp;
   temp->prev = tail;
   tail = temp;
   }
   size++;
 }
 void insertAthead(int val){
  Node* temp = new Node(val);
  if(size == 0) head = tail = temp;
  else{
   temp->next = head;
   head->prev = temp;
   head = temp; 
  }
  size++;
 }
 void insertAtIdx(int idx, int val){
  if(idx < 0 || idx > size) cout<<"Invalid Index"<<endl;
  else if(idx == 0) insertAthead(val);
  else if(idx == size) insertAtTail(val);
  else{
   Node* t = new Node(val);
   Node* temp = head;
   for(int i =1; i <= idx-1; i++){
    temp = temp->next;

   }
   t->next = temp->next;
   temp->next = t;
   t->prev = temp;
   t->next->prev = t;
   size++;
  }
 }
 void deleteAtHead(){
  if(size == 0) {
   cout<<"List is Empty";
   return;
  }
  head = head->next;
  if(head) head->prev = NULL;
  if(head==NULL) tail = NULL;
  size--;
 }
 void deleteAtTail(){
  if(size == 0){
   cout<<"List is Empty";
   return;
  }
  else if(size == 1){
   deleteAtHead();
   return;
  }
  Node* temp = tail->prev;
  temp->next = NULL;
  tail = temp;
  size--;
 }
 void DeleteAtIdx(int idx){
  if(size == 0){
   cout<<"List is Empty!";
   return;
  }
  else if(idx < 0 || idx >= size){
   cout<<"Invalid Syntax";
   return;
  }
  else if(idx == 0) return deleteAtHead();
  else if(idx == size-1) return deleteAtTail();
  else{
   Node* temp = head;
   for(int i = 1; i<=idx-1; i++){
    temp = temp->next;

   }
   temp->next = temp->next->next;
   temp->next->prev = temp;
   size--;
  }

 }
 void display(){
  Node* temp = head;

  while(temp != NULL){
   cout<<temp->val<<" "<<endl;
   temp = temp->next;

  }
  cout<<endl;
 }
};
int main(){
 DLL list;
 list.insertAtTail(10);
 list.insertAtTail(20);
 list.insertAtTail(30);
 list.insertAtTail(40);
 list.insertAtTail(50);
 list.display();
 list.insertAthead(23);
 list.display();
}