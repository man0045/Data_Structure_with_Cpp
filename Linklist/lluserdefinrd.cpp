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
class Linkedlist{
public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    void InsertAtBegining(int val){
        Node* temp = new Node(val);
        if(head == NULL) head = temp;
        else{
            temp->next = head;
            head = temp;
        }
        if(tail == NULL) tail = head;
    }
    void InsertAtEnd(int val){
        Node* temp = head;
        if(size== 0) head = tail = temp;
        else{
            tail->next = head;
            tail = temp;
        }
        size++;
    }
    // void InsertAtBegining(int val){
    //     Node* temp = new Node(val);
    //     if(size == 0) head = temp;
    //     else{
    //         temp->next = head;
    //         head = temp;
    //     }
    //     size++;
    // }
    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.InsertAtBegining(23);
    ll.display();
    ll.InsertAtBegining(25);
    ll.display();
    ll.InsertAtBegining(27);
    ll.display();
    ll.InsertAtBegining(29);
    ll.InsertAtBegining(25);
    ll.InsertAtBegining(22);
    ll.display();
    ll.InsertAtEnd(45);
    ll.display();
}