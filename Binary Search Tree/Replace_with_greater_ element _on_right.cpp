#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v){
      val=v;
      left=NULL;
      right=NULL;
    }

};
TreeNode* insertNode(TreeNode* root,int element,int & successor){
    if(root==NULL){
        return new TreeNode(element);
    }

if(element<root->val){
        successor=root->val;
    root->left=insertNode(root->left,element,successor);

}else if(element>root->val){
 root->right=insertNode(root->right,element,successor);

}
return root;

}
void replaceWithLeastGreaterElement(vector<int> &v){
 TreeNode* root=NULL;
 for(int i =v.size();i>=0;i--){
        int successor=-1;
      root=insertNode(root,v[i],successor);
        v[i]=successor;


 }

}
int main(){
cout<<"Enter input"<<endl;
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
replaceWithLeastGreaterElement(v);
for(int i=0;i<n;i++){
  cout<<v[i]<<" ";
}cout<<endl;
return 0;


}
