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
Node* reverseLinkedList(Node* &head){
Node* prev =NULL;
Node* curr=head;
while(curr!=NULL){
    Node* nextptr =curr->next;
    curr->next =prev;
    prev=curr;
    curr=nextptr;


}
 Node* new_node=prev;
 return new_node;




}



int main(){

LinkedList ll;
ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(2);
ll.insertAtTail(4);
ll.insertAtTail(4);
ll.display();
ll.head=reverseLinkedList(ll.head);
ll.display();

return 0;
}



