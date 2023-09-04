#include<bits/stdc++.h>
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

class BST{
public:
    Node* root;
    BST(){
       root=NULL;
}

};




//iterative approch
/*
void insertBST(Node* &root,int val){
 Node* newNode= new Node(val);
if(root==NULL){
   root=newNode;
   return ;
}
Node* current=root;
while(true){

   if(current->val>val){
        if(current->left==NULL){
        current->left=newNode;
        return;

        }
        current=current->left;
}else{
    if(current->right==NULL){
        current->right=newNode;
        return;
    }
    current=current->right;
}

}

}
*/
//recuirsive approch
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
Node* largestNodeBST(Node* root){
Node* curr =root;
while(curr && curr->right!=NULL){
    curr=curr->right;
}
return curr;

}


Node* deleteBST(Node* root,int key){
if(root==NULL){
    return root;
}
if(root->val<key){
    root->right=deleteBST(root->right,key);
}else if(root->val > key){

root->left=deleteBST(root->left,key);

}else{
 //root is the node to be deleted
 if(root->left==NULL && root->right==NULL){
    delete(root);
    return NULL;
 }else if(root->left==NULL){
   Node* temp=root->right;
   delete(root);
   return temp;

 }else if(root->right==NULL){
    Node* temp=root->left;
    delete(root);
    return temp;

 }else{
 //node has 2 child
   Node* justSmaller=largestNodeBST(root->left);
   root->val=justSmaller->val;
   root->left=deleteBST(root->left,justSmaller->val);
 }


}
return root;




}
void inorderTravelsal(Node* root){
    if(root==NULL) return;

 inorderTravelsal(root->left);
 cout<<root->val<<" ";
 inorderTravelsal(root->right);


}
bool searchBST(Node* &root,int key){
if(root->val ==key){
    return true;
}
if(root->val > key){
    return searchBST(root->left,key);
}else if(root->val< key){
  return searchBST(root->right,key);
}


}
int main(){

BST bst1;
 bst1.root=insertBST(bst1.root,30);
insertBST(bst1.root,10);
insertBST(bst1.root,40);
insertBST(bst1.root,60);
insertBST(bst1.root,20);

inorderTravelsal(bst1.root);
cout<<endl;
 bst1.root=deleteBST(bst1.root,30);
//cout<<searchBST(bst1.root,20);
inorderTravelsal(bst1.root);
cout<<endl;






}
