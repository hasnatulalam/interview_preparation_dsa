#include<iostream>
using namespace std;
class Node{

 public:
     int val;
     Node* prev;
     Node* next;
    Node(int data){

      val=data;
      prev=NULL;
      next=NULL;

    }
};
 class DoublyLinkedList{
  public:
      Node* head;
      Node* tail;

      DoublyLinkedList(){
        head=NULL;
        tail=NULL;

      }
    void display(){
       Node*temp =head;
       while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
       }cout<<endl;

      }
  void insertAtEnd(int val){
       Node* new_node=new Node(val);
       if(tail==NULL){
        head=new_node;
        tail=new_node;
        return;
       }
       tail->next=new_node;
       new_node->prev=tail;
       tail=new_node;
       return ;

    }

};
void reverseDoublyLinkedList(Node* &head,Node* &tail){

  Node* currPtr=head;
  while(currPtr!=NULL){
    Node* nextPtr=currPtr->next;
    currPtr->next=currPtr->prev;
    currPtr->prev=nextPtr;
    currPtr=nextPtr;

  }
  //swaping head and tail
  Node* newHead=tail;
  tail=head;
  head=newHead;
}


int main(){

    DoublyLinkedList dll;
    dll.insertAtEnd(3);
    dll.insertAtEnd(5);
    dll.insertAtEnd(7);
    dll.insertAtEnd(9);
    dll.display();
    reverseDoublyLinkedList(dll.head,dll.tail);
    dll.display();


return 0;
}

