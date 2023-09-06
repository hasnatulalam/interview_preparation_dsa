#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
      val=data;
      left=NULL;
      right=NULL;
    }
};



    Node* newNode(int val){
    Node* newNode = new Node(val);
    if (!newNode) {
        cout << "Memory error\n";
        return nullptr;
    }
    newNode->val=val;
    return newNode;
}

bool isBSTUtil(Node* node, int minVal, int maxVal) {
    if (node == nullptr)
        return true;
    if (node->val < minVal || node->val > maxVal)
        return false;
    return isBSTUtil(node->left, minVal, node->val - 1) &&
           isBSTUtil(node->right, node->val + 1, maxVal);
}

bool isBST(Node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}







int main(){

 Node* root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(3);

    if (isBST(root))
        cout << "The binary tree is a BST.\n";
    else
        cout << "The binary tree is not a BST.\n";

    return 0;







}


