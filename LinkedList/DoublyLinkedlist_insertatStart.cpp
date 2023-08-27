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

    void insertAtStart(int val){
      Node* new_node= new Node(val);
      if(head==NULL){
         head=new_node;
         tail=new_node;
         return;
      }
      new_node->next=head;
      head->prev=new_node;
      head=new_node;
      return ;

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
void insertAtPosition(int val,int k){

//assuming k is less or equal to length of linked list
Node* temp =head;
int cnt=1;
while(cnt<(k-1)){
    temp=temp->next;
    cnt++;
}
 //temp will be pointing to the node at(k-1)th position
 Node* new_node =new Node(val);
 new_node->next=temp->next;
 temp->next=new_node;
 new_node->prev=temp;
 new_node->next->prev=new_node;
 return ;
}
void deleteAtFirst(){

    if(head==NULL){
        return ;
    }

 Node* temp =head;
 head=head->next;
 if(head==NULL){
    tail=NULL;
 }else{
 head->prev=NULL;
 }
 delete(temp);
 return ;
}

void deleteAtEnd(){
   if(head==NULL){
    return ;
   }
   Node* temp =tail;
   tail=tail->prev;
   if(tail==NULL){
     head=NULL;
   } else{
     tail->next=NULL;
   }
   delete(temp);
   return ;
}

void deleteAtPos(int k){

  Node* temp =head;
  if(head==NULL){
    return ;
  }
  int cnt =1;
  while(cnt<k){
    temp=temp->next;
    cnt++;
  }
  //now temp is pointing to kth position
  temp->prev->next=temp->next;
  temp->next->prev=temp->prev;
  delete(temp);
  return ;



}
};



int main(){

    DoublyLinkedList dll;
    dll.insertAtEnd(3);
    dll.insertAtEnd(5);
    dll.insertAtEnd(7);
    dll.display();
    dll.insertAtPosition(8,2);
    dll.display();
    dll.deleteAtFirst();
      dll.display();
    dll.deleteAtEnd();
    dll.display();
    dll.deleteAtPos(3);
    dll.display();




return 0;
}

