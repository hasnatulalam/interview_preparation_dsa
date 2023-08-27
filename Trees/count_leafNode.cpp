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
int countLeafNode(Node* root){
 if(root==NULL) return 0;
 if(root->left==NULL && root->right==NULL) return 1;
 int leftMax=countLeafNode(root->left);
 int rightMax=countLeafNode(root->right);
 return (leftMax+rightMax);



}


int main() {
       Node *root = new Node(2);
       root->left = new Node(4);
       root->right = new Node(10);
       root->left->left = new Node(6);
       root->left->right = new Node(5);
       root->right->right = new Node(11);
      cout<<countLeafNode(root)<<endl;
}



