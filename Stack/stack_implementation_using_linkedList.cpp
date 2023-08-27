#include<iostream>
using namespace std;
class Node{
 public:
 int data;
 Node* next;
   Node(int d){
    this->data=d;
    this->next=NULL;

   }
};
class Stack{
  Node* head;
  int capacity;
  int currsize;
  public:
      Stack(int c){
         this->capacity=c;
         this->currsize=0;
         head=NULL;
      }
      bool isEmpty(){
        return this->head==NULL;
      }
      bool isFull(){
       return  this->currsize==this->capacity;

      }
      void push(int data){
          if(this->currsize==this->capacity){
            cout<<"overflow\n";
            return ;
          }
          Node* new_node=new Node(data);
          new_node->next=this->head;
          this->head=new_node;
          this->currsize++;


      }
      int pop(){
         if(this->head==NULL){
                cout<<"underflow\n";
                return INT_MIN ;

         }
         Node* new_head=this->head->next;
         this->head->next=NULL;
         Node* toberemoved =this->head;
         int result= toberemoved->data;
         delete(toberemoved);
         this->head=new_head;
         return result;



      }
      int Top(){
        if(this->head==NULL){
                cout<<"underflow\n";
                return INT_MIN ;

         }
         return this->head->data;

      }
      int size(){
        return this->currsize;
      }



};
int main(){

Stack st(5);
st.push(1);
st.push(2);
st.push(3);
cout<<st.Top()<<"\n";
st.push(4);
st.push(5);
cout<<st.Top()<<"\n";
st.push(6);
st.pop();
st.pop();
cout<<st.Top()<<"\n";


}
