#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    vector<Node*> child;

   Node(int data){
    this->data=data;

   }
};

void preorderTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    for(Node* child:root->child){
        preorderTraversal(child);
    }
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
        for(Node* child:curr->child){
            q.push(child);
        }
    }
    cout<<endl;


}

}
void serialisedTree(Node* root,string ans){

if(root==NULL) return ;
ans+=to_string(root->data)+ ":"+to_string(root->child.size())+":";
for(Node* child:root->child){
    ans+=to_string(chid->data)+ ",";
}
ans.pop_back();
ans+="\n";

}





int main(){

Node* root = new Node(10);
    root->child.push_back(new Node(2));
    root->child.push_back(new Node(34));
    root->child.push_back(new Node(56));
    root->child.push_back(new Node(100));
    root->child[2]->child.push_back(new Node(1));
    root->child[3]->child.push_back(new Node(7));
    root->child[3]->child.push_back(new Node(8));
    root->child[3]->child.push_back(new Node(9));
    levelorderTraversal(root);
    string serialisedTree="";
    serialisedTree(root,serialisedTree);
    cout<<serialisedTree<<endl;






}



