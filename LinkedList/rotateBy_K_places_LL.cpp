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
Node* rotateByK(Node* &head,int k){
// find length of the linked list

int n=0;
//step find tail node
Node* tail =head;
while(tail->next!=NULL){
    n++;
    tail=tail->next;
}
n++; // for including last node
k=k%n;
if(k==0){
    return head;
}
tail->next=head;
//step3 travers n-k nodes
Node* temp =head;
for(int i=1;i<n-k;i++){
    temp=temp->next;
}
//temp is now pointing to (n-k) nodes

Node* newHead=temp->next;
temp->next=NULL;
return newHead;



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
ll.head=rotateByK(ll.head,3);
ll.display();
return 0;
}




