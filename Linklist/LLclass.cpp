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

class LinkedList{
public:
 Node* head;
 Node* tail;
 int size;
 LinkedList(){
  head = tail = NULL;
  size = 0;
 }
 void insertAtEnd(int val){
  Node* temp = new Node(val);
  if(size == 0) head = tail = temp;
  else{
   tail->next = temp;
   tail = temp;
  }
  size++;

 }
 void insertAtfirst(int val){
  Node* temp = new Node(val);
  if(size == 0) head = tail = temp;
  else{
   temp->next=head;
   head= temp;
  }
  size++;
 }
 void insertatIdx(int idx, int val){
  if(idx >= size or idx < 0){
   cout<<"Invalid Index"<<endl;
   return;
  }
  else if(idx == 0) insertAtfirst(val);
  else if(idx == size) insertAtEnd(val);
  else{
   Node* t = new Node(val);
   Node* temp = head;
   for(int i = 1; i<=idx; i++){
    temp = temp->next;
   }
   t->next = temp->next;
   temp->next=t;
  }
  size++;
 }
 int getIdx(int idx){
  if(idx < 0 or idx >= size){
   return -1;
  }
  else if(idx == 0) return head->val;
  else if(idx == size-1) return tail->val;
  else{
   Node* temp = head;
   for(int i = 1; i<= idx; i++){
    temp = temp->next;
   }
   return temp->val;
  }
 }
 void deleteatFirst(){
  if(size == 0){
   cout<<-1<<endl;
   return;
  }
  else{
   head = head->next;
  }
  size--;
 }
 void deleteAtend(){
  if(size==0){
   cout<<"Nothing have to delete"<<endl;
   return;
  }
  else{
   Node* temp = head;
   while(temp->next != tail){
    temp=temp->next;
   }
   temp->next = NULL;
   tail = temp;
  }
  size--;
 }
 void deleteAtidx(int idx){
  if(size==0){
   cout<<"Nothing have to delete"<<endl;
   return;
  }
  else if(idx < 0 or idx >= size){
   cout<<"Invalid Idx"<<endl;
   return;
  } 
  else if(idx == 0) deleteatFirst();
  else if(idx == size-1) deleteAtend();
  else{
   Node* temp = head;
   for(int i = 1; i<=idx-1; i++){
    temp = temp->next;
   }
   temp->next = temp->next->next;

  }
  size--;
 }
 void display(){
  Node* temp = head;
  while(temp != NULL){
   cout<<temp->val<<" ";
   temp = temp->next;
  }
  cout<<endl;
 }
};
int main(){
 LinkedList ll;
 ll.insertAtEnd(10);
 ll.display();
 ll.insertAtEnd(20);
 ll.display();
 ll.insertAtfirst(12);
 ll.display();
 cout << ll.getIdx(2)<<endl;
 ll.insertatIdx(1,32);
 ll.display();
 ll.deleteatFirst();
 ll.display();
 ll.deleteAtend();
 ll.display();
 ll.insertAtEnd(30);
 ll.display();
 ll.insertAtEnd(40);
 ll.display();
 ll.insertAtfirst(15);
 ll.display();
 ll.insertAtEnd(25);
 ll.display();
 ll.insertAtfirst(35);
 ll.display();
 ll.deleteAtidx(5);
 ll.display();
}