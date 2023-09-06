#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    char data;
    vector<Node*> children;

   Node(char data){
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

void inorderTraversal(Node* root){
  if(root==NULL){
    return;
  }
  int childNodes=root->children.size();
  for(int i=0;i<childNodes-1;i++){
    inorderTraversal(root->children[i]);
  }
  cout<<root->data<<" ";
  if(childNodes>0){
    inorderTraversal(root->children[childNodes-1]);
  }

}
void postorderTraversal(Node* root){
    if(root==NULL){
        return ;
    }

    for(Node* child:root->children){
        postorderTraversal(child);
    }
     cout<<root->data<<" ";
}

void levelorderTraversal(Node* root){
if(root==NULL){
    return;
}
queue<Node*> q;
q.push(root);
while(!q.empty()){
    int currentLevelNodes=q.size();
    for(int i=0;i<currentLevelNodes;i++){
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        for(Node* child:curr->children){
            q.push(child);
        }
    }
    cout<<endl;


}

}
int main(){

Node* root=new Node('A');
root->children.push_back(new Node('B'));
root->children.push_back(new Node('C'));
root->children.push_back(new Node('D'));
root->children[0]->children.push_back(new Node('E'));
root->children[0]->children.push_back(new Node('F'));
root->children[2]->children.push_back(new Node('G'));
levelorderTraversal(root);


/*
cout<<root->data<<endl;
for(Node* child:root->children){
        cout<<child->data<<" ";

}
*/

}
