#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
       val =data;
       next=NULL;

    }


};
class LinkedList{
public:
    Node* head;
    LinkedList(){

    head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node =new Node(val);

        if(head==NULL){
            //Linked list empty
            head =new_node;
            return ;

        }
        Node* temp =head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = new_node;

    }
    void display(){
      Node* temp =head;

      while(temp!=NULL){
          cout<<temp->val<<" ->";
          temp =temp->next;
      }cout<<"NULL"<<endl;



    }


};
Node* reversalkLinkedlist(Node* &head,int k){
Node* prev =NULL;
Node* curr=head;
int counter=0;
while(curr!=NULL && counter<k){

    Node* next =curr->next;
    curr->next =prev;
    prev =curr;
    curr=next;
    counter++;


}
  if(curr!=NULL){
    Node* new_head = reversalkLinkedlist(curr,k);
    head->next =new_head;
  }

 return prev;






}

int main(){

LinkedList ll;
ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(3);
ll.insertAtTail(4);
ll.insertAtTail(5);
ll.insertAtTail(6);
ll.display();
 ll.head=reversalkLinkedlist(ll.head,2);
ll.display();
return 0;
}


