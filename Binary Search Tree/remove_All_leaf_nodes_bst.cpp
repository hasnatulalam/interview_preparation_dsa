#include <iostream>
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
    Node* newNode=new Node(val);
    return newNode;
}


Node* insertBST(Node* &root,int val){
if(root==NULL){
   Node* newNode= new Node(val);
  return newNode;
}
//recuirsive case
//root->val means insert value item and val means cuurent val
if(root->val > val){
    root->left=insertBST(root->left,val);
}
else if(root->val < val){
  root->right=insertBST(root->right,val);
}


return root;


}



    Node* removeLeafNodes(Node* root) {
        if (root == NULL) {
            return NULL;
        }

        if (root->left == NULL && root->right == NULL) {
            return NULL;
        }

        root->left = removeLeafNodes(root->left);
        root->right = removeLeafNodes(root->right);

        return root;
    }


    void preorderTraversal(Node* root) {
        if (root == NULL) {
            return ;
            }

            cout << root->val << " ";
            preorderTraversal(root->left);
            preorderTraversal(root->right);

    }




int main() {
    Node* root = NULL;


    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "\nEnter the node values:" << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root=insertBST(root,x);
    }

    cout << "Preorder traversal of the BST before removing leaf nodes:" << endl;
     preorderTraversal(root);

    removeLeafNodes(root);

    cout << "\nPreorder traversal of the BST after removing leaf nodes:" << endl;
    preorderTraversal(root);

    return 0;
}

