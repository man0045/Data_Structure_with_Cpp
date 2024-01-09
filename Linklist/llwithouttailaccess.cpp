#include<iostream>
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
class LinkedList{
 public:
  Node* head;
  int size;
  LinkedList(){
   head = NULL;
   size=0;
  }
  void insertAtEnd(int val){
   Node* temp = head;
   Node* t = new Node(val);
   if(size == 0) head = t;
   else{
    while(temp->next!=NULL){
     temp=temp->next;
    }
    temp->next = t;
   }
   size++;
  }
  void insertAtfirst(int val){
   Node* temp = new Node(val);
   if(size == 0) head = temp;
   else{
    temp->next = head;
    head = temp;
   }
   size++; 
  }
  void insertatIdx(int idx,int val){
   if(idx < 0 and idx> size){
    cout<<"Invalid Idx"<<endl;
   }
   else if(size == 0) insertAtfirst(val);
   else if(size == idx) insertAtEnd(val);
   else{
    Node* temp = head;
    Node* t = new Node(val);
    for(int i=1; i<=idx-1; i++){
     temp = temp->next;
    }
    t->next = temp->next;
    temp->next = t;
   }
   size++;
  }

  int getIdx(int idx){
   Node* temp = head;
   if(idx < 0 or idx >= size){
    return -1;
   }
   else if(idx == 0) return head->val;
   else if(idx == size-1){
    while(temp->next!= NULL){
     temp=temp->next;
    }
    return temp->val;
   }
   else{
    for(int i=1; i<=idx; i++){
     temp = temp->next;
    }
    return temp->val;
   }
  }

  void deleteatfirst(){
   if(size == 0){
    cout<<"No Idx present"<<endl;
    return;
   }
   else{
    head = head->next;
   }
   size--;
  }

  void deleteAtend(){
   if(size == 0){
    cout<<"No such value to delete"<<endl;
    return;
   }
   else{
    Node* temp = head;
    while(temp-> next->next!= NULL){
     temp = temp->next;
    }
    temp->next = NULL;
   }
   size--;
  }
  void deleteAtidx(int idx){
   if(size == 0){
    cout<<"No such value to delete"<<endl;
    return;
   }
   else if(idx < 0 or idx >= size){
    cout<<"Invalid idx" <<endl;
    return;
   }
   else if(idx == 0) deleteatfirst();
   else if(idx == size) deleteAtend();
   else{
    Node* temp= head;
    for(int i =1; i<=idx-1; i++){
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
 ll.insertAtfirst(45);
 ll.display();
 ll.insertAtEnd(15);
 ll.display();
 ll.insertAtfirst(35);
 ll.display();
 ll.insertAtEnd(25);
 ll.display();
 ll.insertAtfirst(50);
 ll.display();
 ll.insertatIdx(2,24);
 ll.display();
 cout<<ll.getIdx(3)<<endl;
 cout<<ll.getIdx(5)<<endl;
 cout<<ll.getIdx(6)<<endl;
 cout<<ll.getIdx(9)<<endl;
 ll.deleteatfirst();
 ll.display();
 ll.deleteAtend();
 ll.display();
 ll.deleteAtidx(2);
 ll.display();
 
}