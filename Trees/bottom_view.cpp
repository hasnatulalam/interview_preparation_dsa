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
vector<int> bottomview(Node* root){
vector<int> ans;
if(root==NULL) return {};
queue<pair<Node*,int>> q;
q.push(make_pair(root,0));
map<int,int> m;
while(!q.empty()){
    int nodesAtCurrentLevel=q.size();
    while(nodesAtCurrentLevel--){
        pair<Node*,int> p=q.front();
        Node* currNode=p.first;
        int currentColumn=p.second;
        q.pop();
           m[currentColumn]=currNode->data;

        if(currNode->left){
            q.push(make_pair(currNode->left,currentColumn-1));
        }
        if(currNode->right){
             q.push(make_pair(currNode->right,currentColumn+1));
        }


    }


}
for(auto it:m){
    ans.push_back(it.second);
}


return ans;

}


int main() {
       Node *root = new Node(2);
       root->left = new Node(4);
       root->right = new Node(10);
       root->left->left = new Node(6);
       root->left->right = new Node(5);
       root->right->right = new Node(11);
       vector<int> ans=bottomview(root);
       for(auto it:ans){
        cout<<it<<" ";
       }cout<<endl;

}





