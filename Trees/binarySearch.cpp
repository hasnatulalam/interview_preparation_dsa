#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;

  node(int d){
   this->data =d;
   this->left =NULL;
   this->right =NULL;
  }
};
node* buildtree(node* root){
 cout<<"Enter the data"<<endl;
 int data;
 cin>>data;
 root =new node(data);

 if(data== -1){
    return NULL;
 }
 cout<<"Enter data for left of"<<data<<endl;
 root->left =buildtree(root->left);
 cout<<"Enter data for right of"<<data<<endl;
 root->right =buildtree(root->right);

}
void levelOrderTravelsal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp =q.front();

        q.pop();
        if(temp==NULL){
            //purana level travel ho chuka hai
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
             cout<<temp->data<<" ";
             if(temp->left){
            q.push(temp->left);
        }
          if(temp->right){
            q.push(temp->right);
        }
        }

    }
}

int main(){

node* root=NULL;

//create buildtree
root =buildtree(root);

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

//level order travelsal
levelOrderTravelsal(root);

}
