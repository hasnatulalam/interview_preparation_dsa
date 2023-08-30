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
void levelOrderTraversal(Node* root){

if(root==NULL){
    return ;
}
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    int nodesAtCurrentLevel=q.size();

      for(int i =0;i<nodesAtCurrentLevel;i++){
        Node* currNode=q.front();
        q.pop();
        cout<<currNode->data<<" ";

        if(currNode->left){
            q.push(currNode->left);
        }
        if(currNode->right){
            q.push(currNode->right);
        }

    }
    cout<<endl;

  }

}


int main() {
       Node *root = new Node(2);
       root->left = new Node(4);
       root->right = new Node(10);
       root->left->left = new Node(6);
       root->left->right = new Node(5);
       root->right->right = new Node(11);
       levelOrderTraversal(root);
}



