#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class Node{
public:
 Node* left;
 Node* right;
 int val;
 Node(int val){
  this->val = val;
  this->left = NULL;
  this->right = NULL;
 }
};

int levels(Node* root){
 if(root == NULL) return 0;
 return 1 + max(levels(root->left), levels(root->right));
}

void left(Node* root, int &maxlevel, int currlevel, vector<int> &ans){
 if(!root) return;
 if(maxlevel < currlevel) {
  maxlevel = currlevel;
  ans.push_back(root->val);
 }
 left(root->left, maxlevel, currlevel+1, ans);
 left(root->right, maxlevel, currlevel+1, ans);
}


void display(Node* root){
 if(root == NULL) return;
 cout<<root->val<<" ";
 display(root->left);
 display(root->right);
}
int main(){
 Node* root = new Node(12);
 root->left = new Node(15);
 root->right = new Node(24);
 root->left->left = new Node(29);
 root->left->right = new Node(34);
 root->right->left = new Node(25);
 root->left->right->left = new Node(31);
 root->left->right->right = new Node(37);
 display(root);
 cout<<endl;
 int maxlevel = -1, currlevel = 0;
 vector<int> res;
 left(root, maxlevel,currlevel,res);
 for(auto val : res) cout<<val<<" ";
 cout<<endl;
 return 0;


}