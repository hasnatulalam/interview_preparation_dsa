#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
    data=val;
    left=NULL;
    right=NULL;
    }
};
Node* newNode(int val){
    Node* newNode=new Node(val);
    return newNode;
}


Node* sortedArrayToBST(vector<int>a, int start, int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    Node* root=newNode(a[mid]);

    root->left=sortedArrayToBST(a,start,mid-1);
    root->right=sortedArrayToBST(a,mid+1,end);
    return root;

}


void preOrder(Node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>a(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
        cin>>a[i];

    Node *root = sortedArrayToBST(a, 0, n-1);
    cout << "\nPreOrder Traversal of constructed BST: ";
    preOrder(root);

    return 0;
}
