#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
       this->val=val;
       this->next= NULL;

    }


};
class Linkedlist{
public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
    head  = tail = NULL;
    size = 0;
    }
    void insertatEnd(int val){
    Node* temp = new Node(val);
    if(size == 0)  head = tail = temp;
    else{
        tail->next = temp;
        tail = temp;
    }
    size++;
    }
    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
    }




};
int main(){
 Linkedlist list;
 list.insertatEnd(45);
 list.insertatEnd(67);
 list.insertatEnd(223);
 list.insertatEnd(77);

 list.display();
}