#include<iostream>
using namespace std;
class Node{
 public:
 int data;
 Node* next;
   Node(int d){
    data=d;
    next=NULL;

   }
};
class Stack{
  Node* head;
  int capacity;
  int currsize;
  public:
      Stack(int c){
         capacity=c;
         currsize=0;
         head=NULL;
      }
      bool isEmpty(){
        return head==NULL;
      }
      bool isFull(){
       return currsize==capacity;

      }
      void push(int data){
          if(currsize==capacity){
            cout<<"overflow\n";
            return ;
          }
          Node* new_node=new Node(data);
          new_node->next=head;
          head=new_node;
          currsize++;


      }
      int pop(){
         if(head==NULL){
                cout<<"underflow\n";
                return INT_MIN ;

         }
         Node* new_head=head->next;
         this->head->next=NULL;
         Node* toberemoved =head;
         int result= toberemoved->data;
         delete(toberemoved);
         head=new_head;
         return result;



      }
      int Top(){
        if(head==NULL){
                cout<<"underflow\n";
                return INT_MIN ;

         }
         return head->data;

      }
      int size(){
        return currsize;
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

