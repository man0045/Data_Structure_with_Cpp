#include<iostream>
#include<limits.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right= NULL;
    }
};
void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
    
}
int minValue(Node* root){
    
    if(root == NULL) return INT_MAX;
    int lmax = minValue(root->left);
    int rmax = minValue(root->right);

    return min(root->val, max(lmax, rmax));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(34);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout<<endl;
    cout<<"the minimum value would be  "<<minValue(a);
}