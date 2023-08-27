#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
  Node(int data){
   this-> data=data;
    this->next=NULL;

  }

};
class Queue{

    Node* head;
    Node* tail;
    int Size;
public:
    Queue(){
      this->head=NULL;
      this->tail=NULL;
      Size=0;

    }
 void enqueue(int data){
     Node* newNode=new Node(data);
   if(this->head==NULL){
     this-> head=this->tail=newNode;
   }else{
     this->tail->next=newNode;
    this->tail=newNode;


   }
   Size++;

  }
  void dequeue(){
      if(this->head==NULL){
        //ll is empty
        return;

      }else{
          Node* oldHead=head;
         Node* newHead=this->head->next;
        this-> head=newHead;
         if(this->head==NULL) this->tail=NULL;
         oldHead->next=NULL;
         delete(oldHead);
          Size--;
      }

  }
  int getSize(){
     return this->Size;
  }
  bool isEmpty(){
    return this->head==NULL;

  }
  int Front(){
    if (this->head==NULL) return -1;
     return this->head->data;
  }





};
int main(){
 Queue qu;
 qu.enqueue(10);
qu.enqueue(20);
qu.enqueue(30);
qu.dequeue();
qu.enqueue(40);
while( not qu.isEmpty()){
    cout<<qu.Front()<<" ";
    qu.dequeue();
}



}
