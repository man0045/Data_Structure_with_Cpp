#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

vector<int> levelOrder(Node* root) {
    vector<int> res;
    if (root == nullptr) return res;

    queue<Node*> qu;
    qu.push(root);

    while (!qu.empty()) {
        int size = qu.size();
        for (int i = 0; i < size; i++) {
            Node* x = qu.front();
            qu.pop();
            res.push_back(x->val);

            if (x->left != nullptr) {
                qu.push(x->left);
            }
            if (x->right != nullptr) {
                qu.push(x->right);
            }
        }
    }
    return res;
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    vector<int> ans = levelOrder(a);

    // Output the vector
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
