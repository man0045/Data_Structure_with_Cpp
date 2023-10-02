// Implement a Linked List class.
// The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display
// functions.

#include<iostream>
#include<vector>
using namespace std;
class Node{
public:

 int val;
 Node* next;
 Node(int val){
  this -> val = val;
  this -> next = NULL;
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
 void insertAtbeg(int val){
  Node* temp = new Node(val);
  temp->next = head;

  head = temp;
  size++;
 }
};
int main(){
int n;
cout<<"Enter the Size of LinkedList"<<endl;
cin >> n;

LinkedList ll;

for(int i =0; i<n; i++){
 int val;
 cin>>val;
 ll.insertAtbeg(val);
}
vector<int>k(n);

Node* current = ll.head;
int i =0;
while(current != NULL && i<n){
 k[i++] = current->val;
 current = current->next ;
}
for(int i =0; i<n; i++){
 cout<<k[i]<<"->";
}

cout << "NULL" << endl;
return 0;


}


