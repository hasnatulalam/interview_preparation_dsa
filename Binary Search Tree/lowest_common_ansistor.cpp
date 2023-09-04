
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

Node* lca(Node* root, int n1, int n2)
{
    if (root == NULL)
        return NULL;

    // If both n1 and n2 are smaller than root
    // LCA lies in left
    if (root->val > n1 && root->val > n2)
        return lca(root->left, n1, n2);

    // If both n1 and n2 are greater than root
    // LCA lies in right
    if (root->val < n1 && root->val < n2)
        return lca(root->right, n1, n2);

    return root;
}

int main()
{
     Node* root = NULL;
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;


    int x;
    cout<<"Enter the values of nodes: ";
    for(int i = 0; i < n; i++){
        cin>>x;
        if(i == 0)
            root = insertBST(root, x);
        else
            insertBST(root, x);
    }
    int a, b;
    cout<<"Node-1: ";
    cin>>a;

    cout<<"Node-2: ";
    cin>>b;

    cout<<"Lowest Common Ancestor: "<<lca(root, a, b)->val;

    return 0;
}
