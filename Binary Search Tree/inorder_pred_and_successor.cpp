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

void inOrdPredSuccBST(Node* root,Node* &pred,Node* &succ,int key){
if(root==NULL){
    return ;
}
if(root->val==key){
    //predeccesor is rightmost value in left subtree
    if(root->left!=NULL){
        Node* temp=root->left;
        while(temp!=NULL){
            temp=temp->right;
        }
        pred=temp;
    }
    //succ leftmost node in right subtree
    if(root->right!=NULL){
        Node* temp=root->right;
        while(temp!=NULL){
            temp=temp->left;
        }
        succ=temp;
    }
    return ;
}
if(root->val > key){
    succ=root;
    inOrdPredSuccBST(root->left,pred,succ,key);
}
 else if(root->val<key){
    pred =root;
     inOrdPredSuccBST(root->right,pred,succ,key);
}

}


int main(){


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
    int key;
    cin>>key;



Node* pred=NULL;
Node* succ=NULL;
inOrdPredSuccBST(root,pred,succ,key);
if(pred!=NULL){
    cout<<pred->val<<endl;
}else{
cout<<"Pre- NULL"<<endl;
}
if(succ!=NULL){
    cout<<succ->val<<endl;
}else{
cout<<"Succ- NULL"<<endl;
}








}

