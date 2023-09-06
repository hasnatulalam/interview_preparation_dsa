#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    vector<Node*> children;

   Node(int data){
    this->data=data;

   }
};

void preorderTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    for(Node* child:root->children){
        preorderTraversal(child);
    }
}
void justGreaterNode(Node* root,int x,Node* &ans){
if(root==NULL){
    return ;
}
if(root->data > x &&(ans==NULL || root->data<ans->data)){
   ans=root;
}
for(Node* child:root->children){
    justGreaterNode(child,x,ans);
}


}


int main(){

Node* root=new Node(20);
root->children.push_back(new Node(8));
root->children.push_back(new Node(22));

root->children[0]->children.push_back(new Node(4));
root->children[0]->children.push_back(new Node(12));
root->children[0]->children[1]->children.push_back(new Node(10));
root->children[0]->children[1]->children.push_back(new Node(14));
preorderTraversal(root);
int x=10;
Node* ans=NULL;
justGreaterNode(root,x,ans);
cout<<"Ans"<<" ";
if(ans==NULL) cout<<"NULL"<<" ";
else cout<<ans->data<<endl;




}

