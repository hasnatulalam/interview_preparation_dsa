#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node *left;
       Node *right;
       Node(int val){
          data = val;
           left=right=NULL;
       }
};
void inorder(Node *root){
       if(root == NULL) return;

       inorder(root->left);
       cout<<root->data<<" ";
       inorder(root->right);
}


int main() {
       Node *root = new Node(2);
       root->left = new Node(4);
       root->right = new Node(10);
       root->left->left = new Node(6);
       root->left->right = new Node(5);
       root->right->right = new Node(11);
       inorder(root);
}

