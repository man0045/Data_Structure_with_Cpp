#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
 int val;
 Node* left;
 Node* right;
 Node(int val){
  this->val = val;
  this->left = NULL;
  this->right = NULL;
 }
};

void display(Node* root){

 if(root == NULL) return;
 cout<<root->val<<" ";
 display(root->left);
 display(root->right);
}
int maxi(Node* root){
 if(root==NULL) return INT_MIN;
 return max(root->val, max(maxi(root->left), maxi(root->right)));
}
int mini(Node* root){
 if(root==NULL) return INT_MAX;
 return min(root->val,min(mini(root->left), mini(root->right)));
}
int sum(Node* root){
 if(root == NULL) return 0;
 return root->val + sum(root->left) + sum(root->right);
}
int product(Node* root){
 if(root == NULL) return 1;
 return (root->val)*(product(root->left)*product(root->right));
}
int main(){
 Node* a = new Node(1);
 Node* b = new Node(2);
 Node* c = new Node(3);
 Node* d = new Node(4);
 Node* e = new Node(5);
 Node* f = new Node(6);
 Node* g = new Node(7);
 Node* h = new Node(8);
 a->left = b;
 a->right = c;
 b->left = d;
 b->right = e;
 c->left = f;
 c->right = g;
 d->left = h;
 display(a);
 cout<<endl;
 cout<<"Maxi value is : "<<maxi(a);
 cout<<endl;
 cout<<"Mini value is : "<<mini(a);
 cout<<endl;
 cout<<"Sum of the Tree is : "<<sum(a);
 cout<<endl;
 cout<<"Productof the Tree is : "<<product(a);


}