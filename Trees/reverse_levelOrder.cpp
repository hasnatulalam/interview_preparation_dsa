#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
       int val;
       Node *left;
       Node *right;
       Node(int data){
           val = data;
            left=right=NULL;
       }
};
vector<int> revLevelOrder(Node* root) {
        queue<Node*>q;
        stack<int> s;
        vector<int> ans;
        if(root==NULL){
            return ans;
        }

        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                Node*temp=q.front();
                q.pop();
                s.push(temp->val);

                if(temp->right)
                {
                    q.push(temp->right);
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
            }
        }
        while(!s.empty())
        {
            int temp=s.top();
            ans.push_back(temp);
            s.pop();
        }
        return ans;
}
int main()
{
       Node *root = new Node(2);
       root->left = new Node(4);
       root->right = new Node(10);
       root->left->left = new Node(6);
       root->left->right = new Node(5);
       root->right->right = new Node(11);
       vector<int> ans=revLevelOrder(root);
       for(int i=0;i<ans.size();i++)
       {
           cout<<ans[i]<<" ";
       }
       return 0;
}
