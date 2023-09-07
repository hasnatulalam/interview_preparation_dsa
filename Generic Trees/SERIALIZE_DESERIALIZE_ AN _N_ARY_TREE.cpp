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
void serialiseTree(Node* root,string & ans){

if(root==NULL) return ;
ans+=to_string(root->data)+ ":"+to_string(root->child.size())+":";
for(Node* child:root->child){
    ans+=to_string(child->data)+ ",";
}
if(root->child.size())ans.pop_back();
ans+="\n";
for(Node* child:root->child){
  serialiseTree(child,ans);
}

}
Node* deserialiseTreeHelper(int nodeValue,unordered_map<int,string> mp){
Node* node=new Node(nodeValue);
string nodeStr=mp[nodeValue]; //10:2:30,40
if(nodeStr[0]='0'){
    //leaf node
    return node;
}
int breakPos=nodeStr.find(":");
int childNodesNumber=stoi(nodeStr.substr(0,breakPos));
string childNodeStr=nodeStr.substr(breakPos+1);
int start=0;
for(int i=0;i<childNodesNumber;i++){
    int end=childNodeStr.find(',',start);
    if(end==string::npos) end=childNodeStr.size();
    int childNodeValue=stoi(childNodeStr.substr(start,end));
    node->child.push_back( deserialiseTreeHelper(childNodeValue,mp));
    start=end+1;
}
return node;
}

Node* deserialiseTree(string serialisedStr){

if(serialisedStr==" "){
    return NULL;
}
unordered_map<int,string> mp;  //nodevalue, childnodesstring
int start=0;
for(int i=0;i< serialisedStr.size();i++){
    if(serialisedStr[i]=='\n'){
        string nodeStr=serialisedStr.substr(start,i-start); //10:2:30,40
        int breakPos1=nodeStr.find(":");
        int nodeValue=stoi(nodeStr.substr(0,breakPos1)); //10
        mp[nodeValue]=nodeStr.substr(breakPos1+1); //2:30,40
        start=i+1;

    }
}
int rootNodeValue=stoi(serialisedStr.substr(0,serialisedStr.find(":")));
return deserialiseTreeHelper(rootNodeValue,mp);

}


int main(){

Node* root = new Node(10);
    root->child.push_back(new Node(2));
    root->child.push_back(new Node(34));
    root->child.push_back(new Node(56));
    root->child.push_back(new Node(100));
    root->child[1]->child.push_back(new Node(1));
    root->child[3]->child.push_back(new Node(7));
    root->child[3]->child.push_back(new Node(8));
    root->child[3]->child.push_back(new Node(9));
    levelorderTraversal(root);
    string serialisedTree="";
    serialiseTree(root,serialisedTree);
    cout<<serialisedTree<<endl;

Node* deserialisedRoot=deserialiseTree(serialisedTree);
levelorderTraversal(deserialisedRoot);




}



