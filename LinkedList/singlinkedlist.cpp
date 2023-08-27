#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int data){
       val =data;
       next =NULL;
    }
};

//insert at head
void insertAtHead(Node* &head,int val){
Node* new_node =new Node(val);
new_node->next =head;
head =new_node;
}
void insertAtTail(Node* &head,int val){
Node* new_node =new Node(val);
Node* temp =head;
while(temp->next !=NULL){
    temp =temp->next;
}
//temp has reached last node;
temp->next =new_node;
}
void insertAtPos(Node* &head,int val,int pos){
if(pos==0){
    insertAtHead(head,val);
    return;
}
Node* new_node =new Node(val);
Node* temp =head;
int curr_position =0;
while(curr_position!=pos-1){
    temp=temp->next;
    curr_position++;
}
//temp is pointing to node pos-1
new_node->next=temp->next;
temp->next =new_node;

}
void updateAtPos(Node* &head,int pos,int val){
Node* temp =head;
int curr_pos=0;
while(curr_pos!=pos){
        temp=temp->next;
        curr_pos++;

}
//temp will be ponted to be kth position
temp->val=val;
}
void deleteAtHead(Node* &head){
Node* temp = head; //node to be deleted
head = head->next;
 delete(temp);
}
void deleteAtEnd(Node* &head){
Node* second_last =head;
while(second_last->next->next!=NULL){
    second_last=second_last->next;
}
//now second_last node points to second_last node;

Node* temp =second_last->next;
second_last->next=NULL;
delete(temp);
}
void deleteAtPos(Node* &head,int pos){
 if(pos==0){
    deleteAtHead(head);
    return;
 }
 int curr_pos =0;
 Node* prev =head;
 while(curr_pos!=pos-1){
    prev=prev->next;
    curr_pos++;
 }
 //prev is pointing to pos-1;
 Node* temp =prev->next; //node to be deleted
 prev->next=prev->next->next;
 delete(temp);


}
void display(Node* head){
Node* temp=head;
while(temp!=NULL){
        cout<<temp->val<<"->";
    temp =temp->next;

}cout<<"NULL"<<endl;

}
int main(){
Node* head = NULL;
insertAtHead(head,2);
display(head);
insertAtHead(head,3);
display(head);
insertAtHead(head,8);
display(head);
insertAtHead(head,5);
display(head);
insertAtTail(head,5);
display(head);
insertAtPos(head,4,1);
display(head);
updateAtPos(head,2,7);
display(head);
deleteAtHead(head);
display(head);
deleteAtEnd(head);
display(head);
deleteAtPos(head,2);
display(head);

}
