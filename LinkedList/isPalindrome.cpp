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
bool isPalindrome(Node* &head){

  //step1:find middle element
  Node* slow=head;
  Node* fast =head;
  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;

  }
  //now slow pointer pointing to middle element
  //step2:break the linkedlist in the middle
  Node* curr =slow->next;
  Node* prev=slow;
  slow->next=NULL;
  //step3 reverse the sceond half of linkedlist

  while(curr!=NULL){
    Node* nextNode =curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextNode;
  }
  //step4 check if the two linked list are equal
  Node* head1 =head;
  Node* head2=prev;

  while(head2!=NULL){
    if(head1->val != head2->val){
        return false;
    }
    head1=head1->next;
    head2=head2->next;
  }
  return true;





}

int main(){

LinkedList ll;
ll.insertAtTail(1);
ll.insertAtTail(2);
ll.insertAtTail(3);
ll.insertAtTail(4);
ll.insertAtTail(4);
ll.insertAtTail(3);
ll.insertAtTail(2);
ll.insertAtTail(1);


ll.display();
cout<<isPalindrome(ll.head)<<endl;




return 0;
}



